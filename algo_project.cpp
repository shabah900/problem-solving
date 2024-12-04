#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
#include <cctype>
#include <unordered_map>

#define ALPHABET_SIZE 26
#define QUEUE_SIZE 10

using namespace std;

// Trie Node Definition
struct TrieNode {
    TrieNode* children[ALPHABET_SIZE];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            children[i] = nullptr;
        }
    }
};

// User Data Structure
struct User {
    string username;
    int warnings = 0;
    bool isBanned = false;
};

// Queue for Flagged Messages
class MessageQueue {
    queue<string> messages;

public:
    void enqueue(const string& message) {
        if (messages.size() == QUEUE_SIZE) {
            messages.pop();
        }
        messages.push(message);
    }

    void display() const {
        cout << "\nFlagged Messages:\n";
        if (messages.empty()) {
            cout << "No flagged messages.\n";
            return;
        }
        queue<string> temp = messages;
        while (!temp.empty()) {
            cout << "- " << temp.front() << "\n";
            temp.pop();
        }
    }
};

// Insert a word into the Trie
void insertTrie(TrieNode* root, const string& word) {
    TrieNode* current = root;
    for (char ch : word) {
        int index = tolower(ch) - 'a';
        if (!current->children[index]) {
            current->children[index] = new TrieNode();
        }
        current = current->children[index];
    }
    current->isEndOfWord = true;
}

// Search for toxic words in a message
bool searchTrie(TrieNode* root, const string& word) {
    TrieNode* current = root;
    for (char ch : word) {
        if (!isalpha(ch)) continue;
        int index = tolower(ch) - 'a';
        if (!current->children[index]) {
            return false;
        }
        current = current->children[index];
    }
    return current && current->isEndOfWord;
}

// Find or create a user
User* findOrCreateUser(vector<User>& users, const string& username) {
    for (User& user : users) {
        if (user.username == username) {
            return &user;
        }
    }
    users.push_back({username});
    return &users.back();
}

// Process a single message
void processMessage(TrieNode* trie, MessageQueue& queue, vector<User>& users, const string& username, const string& message) {
    string temp = message;
    string word;
    bool flagged = false;

    for (size_t i = 0; i <= temp.size(); ++i) {
        if (i < temp.size() && isalpha(temp[i])) {
            word += temp[i];
        } else {
            if (!word.empty() && searchTrie(trie, word)) {
                flagged = true;
            }
            word.clear();
        }
    }

    User* user = findOrCreateUser(users, username);

    if (flagged && !user->isBanned) {
        user->warnings++;
        cout << "\nWarning #" << user->warnings << " issued to " << username << " for toxic message: " << message << "\n";
        queue.enqueue(message);
        if (user->warnings >= 3) {
            user->isBanned = true;
            cout << "\nUser " << username << " has been banned for repeated toxic behavior.\n";
        }
    } else if (user->isBanned) {
        cout << "\nMessage from banned user " << username << " ignored: " << message << "\n";
    }
}

int main() {
    // Sample toxic words and slangs
    vector<string> toxicWords = {
        "toxic", "noob", "idiot", "cheater", "trash",
        "loser", "ez", "lame", "stupid", "dumb",
        "rekt", "gitgud", "report", "bot"
    };

    // Initialize Trie, Message Queue, and User List
    TrieNode* trie = new TrieNode();
    MessageQueue queue;
    vector<User> users;

    // Insert toxic words into the Trie
    for (const string& word : toxicWords) {
        insertTrie(trie, word);
    }

    cout << "Toxicity Detection System Initialized.\n";
    cout << "Enter 'exit' to quit.\n";

    string username;
    string message;

    // Get the username once at the beginning
    cout << "\nEnter your username: ";
    getline(cin, username);

    while (true) {
        cout << "\nEnter a message: ";
        getline(cin, message);

        // Exit condition
        if (message == "exit") {
            break;
        }

        processMessage(trie, queue, users, username, message);
    }

    cout << "\nProgram Terminated. Displaying all flagged messages:";
    queue.display();

    return 0;
}


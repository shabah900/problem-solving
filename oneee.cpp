#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n, amount;
    cin >> n >> amount;

    // Read the coin values
    vector<long long> coins(n);
    for (long long i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    // Start with the largest coin value
    long long count = 0;
    for (int i = n - 1; i >= 0 && amount > 0; --i) {
        if (coins[i] <= amount) {
            count += amount / coins[i];
            amount %= coins[i];
        }
    }

    // Output result
    if(count == 1) cout << count << " pin" << '\n';
    else   cout << count << " pins" << '\n';
        // Minimum number of coins


    return 0;
}

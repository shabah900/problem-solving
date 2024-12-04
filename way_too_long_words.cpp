#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n ;
    cin >> n ;

    while(n--)
    {
        string s ;
        cin >> s ;
        if(s.length() > 10)
        {   int middle = s.length() - 2;

            cout << s[0] << middle << s[s.length()-1] << "\n";
        }
        else cout << s << "\n";
    }

}

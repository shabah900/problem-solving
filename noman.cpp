#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> m >> n; // m = amount, n = number of coin denominations
    vector<int> a(n);

    for(int i=0;i<n ;i++)
    {
         a[i] = i + i+1  ;
    }
    sort(a.begin(), a.end(), greater<int>()); // Sort coins in descending order
    int ans = 0;
    for (int i = 0; i < n and m > 0; i++)
    {
        if (a[i] <= m)
        {
            ans += m / a[i]; // Count how many times we can use this coin
            m %= a[i]; // Update the remaining amount
        }
    }
    if (m == 0)
        cout << ans << "\n"; // Print the minimum number of coins used
    else
        cout << -1 << "\n"; // It's not possible to make change with the given coins
    return 0;
}

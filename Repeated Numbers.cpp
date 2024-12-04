#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        vector<int>v(n);

        map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            cin >> v[i] ;
        }

        for(int i=0;i<n;i++)
        {
             mp[v[i]]++;
        }
        for(auto c : mp )
        {
            if(c.second > 1) cout << c.first << " " ;
        }

        cout << "\n" ;

    }
}

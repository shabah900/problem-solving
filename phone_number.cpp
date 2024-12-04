#include<bits/stdc++.h>
using namespace std;

int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n , ans;
    string number ;
    cin >> n >> number ;
    int found = 0 ;

     for(int i=0 ;i<n ; i++)
     {
         if(number[i] == '8' )
            {
                 found++ ;
            }
     }

    if(found > 0)
    {
        ans = min(n/11,found) ;
    }
    else ans = 0 ;
    cout << ans << '\n' ;


}

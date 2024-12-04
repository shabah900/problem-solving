

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t ;
    int cnt =0 ;

    while(t--)
    {
        int a,b;
        cin >> a >> b ;
        int siz = pow(2,a);
        for(int i=0 ; i<siz ; i++)
         {
            for(int j=0 ; j<siz ; j++)
              {
                  if(b== (i&j) ) cnt++;
              }
         }
        cout << cnt << "\n";
    }



}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n ;
    while(n--)
    {
        int t,x=INT_MIN ;
        cin >> t ;
        int arr[t];
        for(int i=0 ;i< t; i++)
        {
            cin  >>  arr[i] ;
        }

        int  mx_diff =arr[0] ;

         for(int i=1 ; i< t; i++)
         {
                x=max(x,mx_diff-arr[i]);
                mx_diff = max(mx_diff,arr[i]);
         }
        cout << x << "\n" ;
    }
}

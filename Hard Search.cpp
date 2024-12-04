
#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n ,i;

    cin >> n ;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int p;
    cin >> p ;


    int ans=0,index=0;

    for( i=0;i<n;i++)
    {
        if(arr[i]==p)
        {
            index = i;
            break ;
        }
    }
    /**if(i%2==0) ans = i+i+1;
    else ans = i+i-1;

    int output =0 ;
    while(ans>1)
    {
        ans = ans -4 ;
        output++ ;
    }

    output++;

    **/
    index = (index/2) + 1;
    cout << index << "\n";

}

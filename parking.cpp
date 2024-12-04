#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n ;
    cin >> n ;
    while(n--)
    {
        int x;
        cin>> x ;
        int arr[] = {};
        for(int i=0 ;i<x; i++ )
        {
            cin >> arr[i] ;
        }
        sort(arr , arr + x);

        int ans =  (arr[x-1] -arr[0]) * 2;


       cout << ans << "\n" ;


    }
}


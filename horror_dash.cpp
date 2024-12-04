#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n ;
    cin >> n ;
    int t = 1 ;
    while(n--)
    {
        int x;
       cin >> x ;
       int arr[x];

       for(int i=0 ;i<x ; i++)
       {
           cin >> arr[i];
       }

        sort(arr , arr + x );



            cout << "Case " << t << ": " <<  arr[x-1] << "\n" ;
            t++ ;




    }
}



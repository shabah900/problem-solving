#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k ;
    int arr[n];
    for(int i=0 ;i<n ;i++)
    {
        cin >> arr[i] ;

    }
    int next = 0 ;

    for(int i=0 ;i<n ;i++)
    {
        if(arr[i] >0 && arr[i] >= arr[k-1])  next++;

    }

    cout << next << '\n' ;
}

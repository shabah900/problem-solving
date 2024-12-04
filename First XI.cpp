#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, power ;

    cin >> n >> power ;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n,greater<int>());
    int bra = 0 ;

    for(int i=0;i<11;i++)
    {
        bra += arr[i];
    }
    if(bra>power) cout << "Yes" << "\n";
    else  cout << "No" << "\n";
}

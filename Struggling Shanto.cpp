#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,cnt=0;
    cin >> n ;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
          if(arr[i] > 50 ) cnt++;
     }

     for(int i=0;i<n;i++)
    {
        cout  << arr[i] << " ";
    }
    cout << "\n" << cnt << "\n" ;

}

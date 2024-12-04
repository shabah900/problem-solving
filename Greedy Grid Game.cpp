#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int b;
    cin >> b ;
    int arr[b];
    for(int i=0;i<b;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+b);

    int ans = arr[0] + arr[b-1];

    cout << ans << "\n" ;

}

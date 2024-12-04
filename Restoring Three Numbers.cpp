#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);

    int first = arr[3]-arr[0];
    int second = arr[3]-arr[1];
    int third = arr[3]-arr[2];
    cout<<first<<" "<<second<<" "<<third<<"\n";

}

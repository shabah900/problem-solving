
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int b;
    cin >> b ;
    vector<int> arr(b);
    for(int i=0;i<b;i++)
    {
        cin >> arr[i];
    }



    sort(arr.begin(),arr.end());

    for(int i=b-1 ; i>=0 ;i--)
    {
        cout << arr[i] << " ";
    }

}

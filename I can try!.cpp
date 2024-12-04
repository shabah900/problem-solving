#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t ;
    while(t--)
    {
        int n,m;
        cin >> n >> m ;
        vector<int> arr(n+m);
        for(int i=0 ;i <n+m;i++)
          {
            cin >> arr[i];
         }

         sort(arr.begin(), arr.end() , greater<int>());
         for(int i=0 ;i <n+m;i++)
          {
            cout <<  arr[i] << " " ;
         }
         cout << "\n" ;

    }





}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,got;
    cin >> n ;
    vector<int> arr(n);

    for(int i=0 ;i <n;i++)
    {
        cin>> arr[i];
    }

    int maximum = *max_element(arr.begin(),arr.end());

    for(int i=0 ;i <n;i++)
    {
       if(arr[i]==maximum)
       {
           got=i+1;
       }
    }


    cout <<  got << "\n" ;


}


#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int b ;
    cin >> b ;
    int arr1[b];
    int arr2[b];

    for(int i=0;i<b;i++)
    {
        cin >> arr1[i];
    }
    for(int i=0;i<b;i++)
    {
        cin >> arr2[i];
    }
    int cnt =0 ;

     sort(arr1 , arr1+b);
    sort(arr2 , arr2+b);

    for(int i=0;i<b;i++)
    {
        if(arr1[i]==arr2[i]) cnt++;
    }

    cout << cnt << "\n" ;

}

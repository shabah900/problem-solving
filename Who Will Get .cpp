

#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);

    int  n , to_find ;

    cin >> n  >> to_find  ;

    int arr[n];

    for(int i=0;i<n ;i++)
    {
         cin >> arr[i] ;
    }

    sort(arr,arr+n);

    bool yes = binary_search(arr,arr+n,to_find);

    if(yes) cout << "Senti Aunti Ramva will never be mine" << "\n" ;
    else  cout << "Senti Aunti Ramva is mine" << "\n" ;

}

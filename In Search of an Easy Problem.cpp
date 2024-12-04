#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n ;
    cin >> n ;
    int arr[n];
    int found =0 ;
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n;i++)
    {
       if(arr[i]==1)
       {
           found = 1;
           break ;
       }
    }
    if(found==1 ) cout << "HARD\n" ;
    else cout << "EASY\n" ;


}




#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);

    int  n;
    cin >> n  ;

    int arr[n*2];

    for(int i=0;i<n*2 ;i++)
    {
         cin >> arr[i] ;
    }
    int arr2[n];

    for(int i=1,j=0;i<n,j<n ;i +=2,j++)
    {
         arr2[j] = arr[i] ;
    }
    sort(arr2,arr2+n);

    int mark = arr2[0] + arr2[1] + arr2[2] ;


    if(mark<150) cout << "Counseling Support Required" << "\n" ;
    else  cout << "Counseling Support Not Required" <<  "\n" << arr2[0] << " " << arr2[1] << " " << arr2[2] <<"\n" ;

}

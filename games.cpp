#include<bits/stdc++.h>

using namespace std;

int main()


{

    int n ;
    cin >> n ;
    int arr[n*2];

    for(int i = 0 ; i< n*2 ; i++ )
    {
        cin >> arr[i];
    }
    int yes = 0 ;
    for(int i=0 ; i < n*2 ; i += 2)
    {
        for(int j = 1 ; j<=n*2 ; j += 2)
        {
            if(j!= i+1 &&  arr[i] == arr[j]) { yes++ ; }
        }
    }

    cout << yes << "\n" ;
}

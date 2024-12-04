
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int b,c ;
    cin >> b >> c ;
    int arr1[b];
    int arr2[b];
    for(int i=0;i<b;i++)
    {
        cin >> arr1[i];
    }
    for(int i=0;i<b;i++)
    {
         arr2[i] = arr1[i] + c;
    }

    int found = 0 ;

    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(arr1[i]==arr2[j]) found++ ;
        }
    }


    if(found>0) cout << "Yes" << "\n" ;
    else if(found == 0 )  cout << "No" << "\n" ;



}

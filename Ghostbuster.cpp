
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int b,power ;
    cin >> b  >> power ;
    vector<int> arr(b);
    for(int i=0;i<b;i++)
    {
        cin >> arr[i];
    }

   int defeat = 0 ;

    for(int i=0;i<b;i++)
    {
        if (arr[i] < power  ) defeat++ ;
    }


       cout << defeat << "\n" ;

}

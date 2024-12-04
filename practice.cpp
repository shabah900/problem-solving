#include<bits/stdc++.h>
#include<conio.h>
using namespace std ;

int main()
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




    getch();
}

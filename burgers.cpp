#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n ;
    int ans = 0 ;
    while(n--)
    {
        int bun ,patty , cutt , price1 , price2 ;

         cin >> bun >> patty >> cutt >> price1 >> price2 ;
         if(bun < (patty*2 + cutt*2) ){
            if(price1 > price2 )
            {
                while(patty>0 && bun > 2)
                {
                    patty--;
                    bun -= 2;
                    ans = ans + price1 ;
                }
                while(cutt>0 && bun > 2)
                {
                    cutt--;
                    bun -= 2;
                    ans = ans + price2 ;
                }
            }
            else {
                while(cutt>0 && bun > 2)
                {
                    cutt--;
                    bun -= 2;
                    ans = ans + price2 ;
                }
                while(patty>0 && bun > 2 )
                {
                    patty--;
                    bun -= 2;               //bun >0
                    ans = ans + price1 ;
                }

            }

         }
         else  {  ans = patty*price1 + cutt * price2 ;
 }

        cout << ans << "\n" ;
        ans = 0 ;
    }

}

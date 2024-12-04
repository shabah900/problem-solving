#include<bits/stdc++.h>

using  namespace std;

int main()
{
    int n ;
    cin >> n ;
    int t = 1 ;
    while(n--)
    {
        int a , b  ;
        cin >> a >> b ;
     int ans ;
      if(b>a || a==b )
      {
          ans = (b-a)*4 + 19 + (a*4) ;
      }
      else if(a>b)
      {
          ans = (a-b)*4 + 19 + (a*4) ;
      }


     cout << "Case " << t << ": " <<  ans << "\n" ;
     t++ ;



    }
}


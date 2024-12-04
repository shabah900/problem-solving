#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g;   // g for girls number
    cin >> g ;

    int arr[g];

    for(int i=0 ; i< g ; i++ )
    {
        cin >> arr[i] ;
    }

    int c;   // c for chimps  number
    cin >> c ;

    int arr2[c];

    for(int i=0 ; i< c ; i++ )
    {
        cin >> arr2[i] ;
    }

    for(int i=0 ; i< c ; i++ )
    {

        int  minimum = arr[0] ;
        int   maximum= arr[g-1] ;


        for(int j=0 ; j< g ; j++ )
      {
          if(minimum < arr2[i])
          {
              if(arr[j] >= minimum && arr[j] < arr2[i])
            {
                minimum = arr[j] ;
            }
          }

          else if(minimum > arr2[i])
          {
              minimum = 0;
              break ;
          }

          else if(maximum  > arr2[i])
          {
              if(arr[g-1-j] <= maximum  && arr[g-1-j] > arr2[i])
            {
                maximum  = arr[g-1-j] ;
            }
          }


          else if(maximum  < arr2[i])
          {
              maximum = 0 ;
              break ;
          }


      }
      if(minimum == 0 && maximum == 0 )
      {
          cout << "X X\n" ;
      }
      else if(minimum == 0 && maximum != 0 )
      {
          cout << "X" << " " << maximum << "\n" ;
      }

      else if(minimum != 0 && maximum == 0 )
      {
          cout << minimum << " " << "X" << "\n" ;
      }
      else
      {
          cout << minimum << " " << maximum << "\n" ;
      }

    }



}

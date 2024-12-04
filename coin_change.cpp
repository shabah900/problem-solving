

#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);

    int  coin , amount ;

    cin >> coin  >> amount  ;

    int arr[coin];

    for(int i=0;i<coin ;i++)
    {
         arr[i] = i + i+1  ;
    }


    int solution[coin][amount+1];
    for(int i=0;i<coin;i++)
    {
        for(int j=0;j<=amount ;j++)
      {
        if(arr[i]>j)
        {
            solution[i][j]=solution[i-1][j];
        }
        else{
            solution[i][j]=min(solution[i-1][j],1+solution[i][j-arr[i]]);
        }
        if(i==0) solution[i][j]=j;
        cout << solution[i][j] << " " ;
      }
     cout << "\n" ;
    }

    cout << solution[coin-1][amount] << "\n";

}

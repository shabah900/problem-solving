#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int  num ;
    cin >> num ;


    if(num%4 == 0 || num%7 == 0 || num%44 == 0 || num%47 == 0 || num%74 == 0 || num%77 == 0 || num%444 == 0 || num%447 == 0 || num%474 == 0 ||  num%477 == 0 || num%744 == 0 || num%747 == 0 || num%774 == 0 || num%777 == 0 )
    {
        cout << "YES\n"  ;
    }
    else       cout << "NO\n"  ;


}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n ;
    int cnt = 0 , first  = 0 , second = 1, fib;
    while(cnt < n)
    {
        if(cnt<=1)
        {
            fib=cnt;

        }
        else
        {
            fib=first+second;
            first = second ;
            second=fib;
        }
        cout << fib << " " ;
        cnt++;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s ;
    cin >> s ;
    int len = s.length();

    sort(s.begin(),s.end());
    for(int i= len/2 ;i<len ; i++)
    {
        if(i<len-1)
        {
            cout << s[i] << "+" ;
        }
        else   cout << s[i] << "\n" ;
    }

}

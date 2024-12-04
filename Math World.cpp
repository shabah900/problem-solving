
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int b;
    cin >> b ;
    vector<int> arr(b);
    for(int i=0;i<b;i++)
    {
        cin >> arr[i];
    }
    int p,q,r;


    cin >> p >> q >> r ;

    sort(arr.begin(),arr.end());

    bool one = binary_search(arr.begin(),arr.end(),p);
    bool two = binary_search(arr.begin(),arr.end(),q);
    bool three = binary_search(arr.begin(),arr.end(),r);
    int ans = 0;
    if(one && two && three )
    {
        ans = p*q*r;
        cout << ans << "\n" ;
        return 0 ;

    }
    else if(one)
    {
        ans += p;
    }
    else if(two)
    {
        ans += q;
    }
    else if(three)
    {
        ans += r;
    }




    cout << ans << "\n" ;

}

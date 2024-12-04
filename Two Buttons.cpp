#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m,p=0;
    cin>>n>>m;
    while (m > n) {
    if (m % 2 == 1) {
        m += 1;
        p++;
    }
    if (m % 2 == 0) {
        m /= 2;
        p++;
    }
}

while (m < n) {
    m += 1;
    p++;
}

cout << p << "\n";

}

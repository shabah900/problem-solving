#include<bits/stdc++.h>
using namespace std;
int   bubble_sort(int arr[],int n);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n ;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }
    int ans = bubble_sort(arr , n);


    cout << ans << "\n" ;


    return 0 ;
}


int   bubble_sort(int arr[],int n)
{
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        int swapp = 0 ;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                cnt++;

            }
            swapp=1;
        }
        if(swapp==0) break ;

    }

    return cnt ;
}


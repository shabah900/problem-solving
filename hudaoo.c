#include<stdio.h>

int main()
{

    int n;
    scanf("%d",&n);
    while(n--)
    {
        int t ;
        scanf("%d",&t);

        int arr[t];
        for(int i=0 ;i< t; i++)
        {
           scanf("%d",&arr[i]);
        }

        int  mx_diff =arr[0]-arr[1] ;

         for(int i=0 ; i< t; i++)
         {

             for(int j=i+1 ; j< t ; j++)
             {
                if(arr[i]-arr[j] >= mx_diff)
                    {
                         mx_diff=arr[i]-arr[j] ;
                    }

             }

         }


        printf("%d\n",mx_diff);
    }
}


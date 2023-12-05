#include<stdio.h>
    int fact(int n)
    {
        int f=1;
        for(int i=1; i<=n; i++){
        f*=i;
        }
        return f;
    }
    int ncr(int n, int r)
    {
        return fact(n)/(fact(n-r)*fact(r));
    }
    void main()
    {
        for(int j=0; j<=5; j++)
        {
            for(int k=j; k<=4; k++)
            {
                printf(" ");
            }
            for(int l=0; l<=j; l++)
            {
             printf("%d ", ncr(j,l)) ; 
            }
            printf("\n");

        }
    }
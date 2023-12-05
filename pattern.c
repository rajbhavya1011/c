# include<stdio.h>
main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i==j)||(j==a))
            printf("*");
            else
            printf(" ");
        }
        
        printf("\n");
        a--;
    }
}
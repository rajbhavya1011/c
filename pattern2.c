#include<stdio.h>
int main()
{
   for(int i=1; i<=5; i++)
   {
    if(i==3)
    {
    for(int k=1;k<=5;k++)
    printf("*");
    }
    else
    {
    for(int j=1; j<=5; j++)
    {
        if(j==3)
        printf("*");
        else
        printf(" ");
    }}
    printf("\n");
   }
}
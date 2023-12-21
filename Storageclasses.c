#include<stdio.h>
void main()
{
    static int a;
    extern int n;
    printf("%d",a);
     printf("%d",n);
}
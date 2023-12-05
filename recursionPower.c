#include <stdio.h>
int power(int a, int b)
{
    if (b==0) return 1;
    if (b==1) return a;
   int x = power(a,b/2);
   if(b%2==0) 
   return x*x;
   else 
   return x*x*a;
}
int main()
{
    int a,b;
    printf("Enter the base");
    scanf("%d",&a);
    printf("Enter the exponent");
    scanf("%d",&b);
    printf("a raised to the power b is %d",power(a,b));
}
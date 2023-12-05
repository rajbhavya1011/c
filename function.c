#include<stdio.h>
int swapn(int i,int j)
{
    printf("i is: %d\n",i);
    printf("j is: %d\n",j);
    int temp=i;
    i=j;
    j=temp;
return i,j;
}
void main()
{
   int c,d,a=10,b=5;
   printf("a")
   c,d=swapn(a,b);
   printf("a is %d\n",c);
    printf("b is %d\n",d);
}
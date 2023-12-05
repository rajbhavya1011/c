#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
return fibo(n-1)+fibo(n-2);
}
int main()
{
int a;
printf("Enter a");
scanf("%d",&a);
printf("Fibonacci no. of 'a'th position is %d",fibo(a));
return 0;
}
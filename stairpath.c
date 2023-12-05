//Program to calculate total no. of ways through which we can climb n no. of stairs. We can can take either 1 step, 2 step or 3 step at a time.
#include <stdio.h>
int stair(int n)
{
    if(n==1 || n==2 || n==3) return n;
    int path;
    path = stair(n-1)+stair(n-2)+stair(n-3);
return path;
}
int main()
{
    int n;
    printf("Enter the number of stairs");
    scanf("%d",&n);
    printf("No. of ways to climb the stair %d", stair(n));
}
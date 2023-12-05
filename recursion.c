//recursive funtion k niche agar code likha h to pehle recursive function chalta h uske baad jab condition false hota h uske baad function last se pehle waale contion pe jata h
#include <stdio.h>
int increase(int n)
{
if(n==0) return;
printf("%d\n",n);
increase(n-1);
printf("%d\n",n);
return;
}
int main()
{
int a;
printf("Enter a number");
scanf("%d",&a);
increase(a);
}

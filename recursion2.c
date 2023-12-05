#include <stdio.h>
int power(int a, int b){
if(b==0) return 1;
return a*power(a,b-1);

}
int main()
{
int a,b,p;
printf("Enter base");
scanf("%d",&a);
printf("Enter power");
scanf("%d",&b);
p=power(a,b);
printf("a to the power b is %d", p);
}
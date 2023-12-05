#include <stdio.h>
void main()
{
int *p;
&p = 10;
printf("%d, %d, %d, %d",p,*p,&p,&(*p));

}
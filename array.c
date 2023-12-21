#include<stdio.h>
int main()
{
   //int a[5] = {1,2,3,4,5}
   int a[4][4];
   for(int i=0; i<4; i++)
   {
   for(int j=0; j<4; j++)
   {
   a[i][j] = 10*(i+1) + (j+1);
   printf("%d ",a[i][j]);
}
printf("\n");
}
}
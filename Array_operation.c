#include<stdio.h>
int main()
{
    int i, n[10]={8,9,1,6,4,2,5,3,7,10}, t;
    for(int k=0;k<9;k++)
    {
    for(i=0;i<10;i++)
    {
      if(n[i]>n[i+1])
      {
        t=n[i+1];
        n[i+1]=n[i];
        n[i]=t;
      }
    }}
    for(i=0;i<10;i++){
        printf(" %d",n[i]);

    }
}
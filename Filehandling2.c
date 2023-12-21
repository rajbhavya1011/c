#include <stdio.h>
#include <stdlib.h>
void main()
{
FILE *fp;
int num[5] = {1,2,3,4,5};
fp = fopen("testbin.bin","wb");
fwrite(num,sizeof(int),5,fp);
fclose(fp);
fp=fopen("testbin.bin","rb");
fread(num,sizeof(int),5,fp);
for(int i=0;i<5;i++)
{
    printf("%d",num[i]);
}
}
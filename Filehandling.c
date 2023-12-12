/*File handling 
easy handling, reusability, to store data
can be stored as .txt or .bin
fopen - 
switch - a,w
a - last position se likhna chalu krega
w - 
Terminal 
CD current directory
PwD present directory
ls list */
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE* fp;
    fp=fopen("test.txt", "r+");
    fp=fopen("test.txt", "a");
    if(fp == NULL)
    printf("File does not exist");
    else
    printf("File exist");
    fprintf(fp, "\n%s\n","Hello World");
    fputs("Hello",fp);
    fp = fopen("test2.txt", "a");
    fputs("My name is Bhavya Raj",fp);
    fclose(fp);
/*create a text file using a c program and wirte the following data:-
1. one line about youself
2. write the struct data to file
3. append file data with file checksum
4. append table of numbers in the file from 2-50.*/
}
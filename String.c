#include <stdio.h>
#include <String.h>
void main()
{
    char a[]="abcde";
    printf("%d\n",strlen(a));
    char b[50];
    strcpy(b,a);
    printf("%d\n",strlen(b));
    printf("%d\n",strcmp(a,b));
    printf("%s\n",strrev(a));
    printf("%s\n",strupr(a));
    printf("%s\n",strlwr(b));
    printf("%s\n",strcat(b,a));
      int n = sizeof(a);
    printf("%d",n);
    //Write C program for string manipulation with two scenerios
    //1. Using string library 2. using character array
    //1. String comparision,String concatenation, string reversal, Length comparision
    //Write a program to create a Structure in c program to represent ECE-A student data like student name, roll no., gender.
}
#include <stdio.h> #include <string.h>

int main()
{
// Input strings
char firstString[100]; char secondString[100];

// Get the first string from the user 
printf("Enter the first string: "); scanf("%s", firstString);

// Get the second string from the user 
printf("Enter the second string: "); scanf("%s", secondString);

// Concatenate the two strings using strcat 
strcat(firstString, secondString);

// Output the concatenated string 
printf("Concatenated string: %s\n", firstString);

return 0;
}


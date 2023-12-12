#include <stdio.h>

// Define the structure
struct Student {
    char name[10];
    int roll_no;
    char gender;
};

int main() 
{   
    int i;
    // Declare a variable of type Student
    struct Student s[3];
    for(int i=0;i<3;i++)
    {
        // Input student details
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d",&s[i].roll_no);
        printf("Enter gender (M/F): ");
        scanf(" %c",&s[i].gender);  // Note the space before %c to skip any previous newline character
    }
    for (i = 0; i < 3; i++)
    {
        // Print student details
        printf("\nStudent Details: %d\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Gender: %c\n", s[i].gender);
    }
    return 0;
}
/*
  "- Create a structure ""Students"" with below member variables:
    - Name of student,
    - Roll no. Of Student,
    - array of 5 Subject marks,
    - Total Percentage 
    
- Calculate the Percentage for ""N"" number of students,
- Display all details for all students,
- Display the details of topper.
(use array of structure)"

*/

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char name[200];
    int marks[5];
    float percentage;
};

//accept details
void accept(struct Student* s)
{
    printf("*******************Student details are:*************");
    printf("\n");
    printf("Enter Roll No are:");
    scanf("%d", &s->rollNo);

    printf("Enter Name: ");
    scanf("%s", s->name);

    float sum = 0;
    printf("details of each marks subjectare: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("Enter Marks of Subject M%d :", i+1);
        scanf("%d", &s->marks[i]);
        sum = sum + s->marks[i];
    }

    // percentage 
    s->percentage = (sum /500.0) * 100;
}

void display(struct Student* s)
{
    printf("\n------Display Student Details are:-----\n");

    printf("Roll No: %d\n",  s->rollNo);
    printf(" Student Names are : %s\n",  s->name);

    for(int i = 0; i < 5; i++)
        printf("Subject %d  : %d\n", i+1, s->marks[i]);

    printf("Percentage : %f \n", s->percentage);
    printf("\n");
}

// topper student find
void Topper(struct Student* st, int n)
{
    int topper = 0;

    for(int i = 1; i < n; i++)
    {
        if((st + i)->percentage > (st + topper)->percentage)
        {
            topper= i;
        }
    }

    printf("=====TOPPER =====");
    display(st + topper);
}

int main()
{
    int n;
    int i = 0;
   
    struct Student* st;   // pointer  for dynamic memory allocation:

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Creating an array of structure for "N" students using DMA
    st = (struct Student*)malloc(n * sizeof(struct Student));

    // Check if memory allocation fails:
    if(st == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // accept the details from users:
    printf("Note: Here, the value of 'N' is finite but entered at runtime:\n");

    for(i = 0; i < n; i++)  
    {
        printf("\nEnter details for Student %d:\n", i+1);
        accept(st + i);      
    }

    // display all students:
    printf("\n\nStudent Details ");
    for(i = 0; i < n; i++)
    {
        display(st + i);
    }

   
    Topper(st, n);

    
    free(st);   // memory free
    return 0;
}
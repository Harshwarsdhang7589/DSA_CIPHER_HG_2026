/*
  "- write a C program to read and print the N student details using structure and Dynamic Memory Allocation.
- create a structure with N number of student details and print the inputted details.
- Memory to store and print structure will be allocated at run time by using malloc() and released by free()."   
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a structure for student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

// Function
void display(struct Student *ptr, int n, int Roll);

int main()
{
    int n, i, searchRoll;
    struct Student *st; // Pointer for Dynamic Memory Allocation

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // to Creating  an array of structure for "N" students using DMA
    st = (struct Student *)malloc(n * sizeof(struct Student));

    // Check if memory was fails:
    if (st == NULL)
{
        printf("Memory allocation failed!\n");
        return 1;
    }
    // accept the details from users:
   
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(st + i)->rollNo);
        printf("Name: ");
        scanf("%s", (st + i)->name);
        printf("Marks: ");
        scanf("%f", &(st + i)->marks);
    }

    

   

    // Free the allocated memory
    free(st);
    st=NULL;
    printf("Memory freed:");
    return 0;
}


void display(struct Student *ptr, int n, int Roll)
{

    for (int i = 0; i < n; i++)
    {
        // Accessing structure members using pointer arithmetic and arrow operator
        if ((ptr + i)->rollNo == Roll)
        {
            printf("\n..Student Result..\n");
            printf("Roll No: %d\n", (ptr + i)->rollNo);
            printf("Name: %s\n", (ptr + i)->name);
            printf("Marks: %.2f\n", (ptr + i)->marks);
        }
    }

    
}
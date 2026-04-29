/*
C48

- write a  C program to pass an array of structures to a user define function
- create a structure which accepts student details.
- create an array of structure for "N" number of students.
- Pass  array  of structure to a function as an argument and search for the perticular student details

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
void searchStudent(struct Student *ptr, int n, int Roll);

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
    printf("Note:Here,the value of 'N' is infinite andcan't be waited till last :");
    for (i = 0; i < n; i++) // here the value of n is infinte so 
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(st + i)->rollNo);
        printf("Name: ");
        scanf("%s", (st + i)->name);
        printf("Marks: ");
        scanf("%f", &(st + i)->marks);
    }

    // Input the roll number to search
    printf("\nEnter the Roll Number to search for: ");
    scanf("%d", &searchRoll);

    // Pass array (pointer) to the function
    searchStudent(st, n, searchRoll);

    // Free the allocated memory
    free(st);
     
    return 0;
}

//  Function to search for a specific student
void searchStudent(struct Student *ptr, int n, int Roll)
{
    int i;
    int found = 0;

    for (i = 0; i < n; i++)
    {
        // Accessing structure members using pointer arithmetic and arrow operator
        if ((ptr + i)->rollNo == Roll)
        {
            printf("\n--- Student Found! ---\n");
            printf("Roll No: %d\n", (ptr + i)->rollNo);
            printf("Name: %s\n", (ptr + i)->name);
            printf("Marks: %.2f\n", (ptr + i)->marks);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent with Roll No %d not found.\n", Roll);
    }
}
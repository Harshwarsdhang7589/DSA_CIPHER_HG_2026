/* "- write a  C program to pass an array of structures to a user define function
- create a structure which accepts student details.
- create an array of structure for ""N"" number of students.
- Pass  array  of structure to a function as an argument and search for the perticular student details." */

#include <stdio.h>
#include <stdlib.h>

void display()
{


}

// main function
int main()
{
    int m;//size
    
    int *arr1;

     // size of arr1:
    printf("enter the size of arr1[]:");
    scanf("%d",&m);

     //DYNAMIC MEMORY ALLOCATION:
    
    //arr1[]  memory allocaTION:
    arr1 = (int*)malloc (m*sizeof(int));

    // Safety Check--> if maaloc fails then it returns
    if(arr1 == NULL)
    {
        printf("Memory allocation failed of arr1[]");
        return 1;
    }


    // Logic to fill the Memory:

    // Memory of arr1[] filled:
    printf("Arr1[] elements are such as: \n");
    for(int i=0;i<n;i++)
    {
        printf("Enter elements [%d]: ",i+1);
        scanf("%d",(arr1 +i));
    }

    // Function call:
    

     // free Memory:
    free(arr1);
    arr1 =NULL;
    printf("\n Memory successfully released arr1[%d]",m);


    return 0;
}
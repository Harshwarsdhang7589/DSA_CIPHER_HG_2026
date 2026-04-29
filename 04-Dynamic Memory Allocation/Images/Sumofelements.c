/*
"- write a C program to read a one dimensional array, print sum of all elements along with inputted array elements using Dynamic Memory Allocation.
- allocate memory for one dimensional array and print the array elements along with sum of all elements. 
- Memory will be allocated in this program using malloc() and released using free()." */
#include <stdio.h>
#include <stdlib.h>

// function: belonging to the Sum of an array:
void Sums( int *p,int a)
{
 int sum=0;
    printf("Sum of an array elements are:\n \n");
    for(int i=0;i<a;i++)
    {
        sum =sum + *(p+i);

    }
    printf("Sum of all elements are:%d",sum);
}

// Main function:
int main()
{
    int n;// size
    int *arr1;
    printf("Enter the array elements SIZES are:\n");
    scanf("%d",&n);

    //DYNAMIC MEMORY ALLOCATION: 
    //arr1[]  memory allocaTION:
    arr1 = (int*)malloc (n*sizeof(int));
    // Safety Check--> if maaloc fails then it returns
    if(arr1 == NULL)
    {
        printf("Memory allocation failed of arr1[%d]",n);
        return 1;
    }
     // Logic to fill the Memory:
    // Memory of arr1[] filled:
    printf("Arr1[%d] elements are such as: \n",n);
    for(int i=0;i<n;i++)
    {
        printf("Enter elements [%d]: ",i+1);
        scanf("%d",(arr1 +i));
    }
    // display function:
     Sums(arr1,n);
    // free Memory:
    free(arr1);
    arr1 =NULL;
    printf("\n Memory successfully released arr1[%d]",n);
return 0;
}


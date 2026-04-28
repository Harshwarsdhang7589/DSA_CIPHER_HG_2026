//Write a function to calculate the sum of all elements of an array
#include <stdio.h>
#include <stdlib.h>

void Sum(int *p,int size)
{
    int sum= 0;

    for(int i=0;i<size;i++)
    {
        sum = sum + *(p+i);
    }

    printf("Sum of array elemenst are:[%d] \n",sum);


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
    for(int i=0;i<m;i++)
    {
        printf("Enter elements [%d]: ",i+1);
        scanf("%d",(arr1 +i));
    }

    // Function call:
    Sum(arr1,m);

     // free Memory:
    free(arr1);
    arr1 =NULL;
    printf("\n Memory successfully released arr1[%d]",m);


    return 0;
}
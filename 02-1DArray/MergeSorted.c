/*  "- Write a C program which allocates two array dynamically.
- Implement logic to merge and sort two array."
           */

#include <stdio.h>

#include <stdlib.h>

// Function lie with Merge logic
void Merged(int *p1,int *p2,int *q,int a,int b)
{
    //Merging of 1st array elements:
    for(int i=0;i<a;i++)
    {
        *(q+i)=*(p1+i);// Merging of 1st array elements are:
    }

    //Merging of 2nd half array elements are:
    for(int i=a;i<(a+b);i++)
    {
        *(q+i)= *(p2 +(i-a));//Merging of 2nd array elements are:
    }

    //Total show of 3rd array  all elements:
    printf("Merged elements are :");
    for(int i=0;i<(a+b);i++)
    {
        printf("%d ",*(q+i));
    }

    printf("\n");


}

// Function with Sorted Logic
void Sorted(int *q,int a,int b)
{
    
    
    // to print the array elements as:
    printf("Final merged elements are as:");
    for(int i=0;i<(a+b);i++)
    {
        printf("%d ",*(q+i));
    }

    

    // Function:To sort the elements are:
    for(int i=0;i<(a+b);i++)
    {
        for(int j=0;j<(a+b-1-i);j++)
        {
            if(*(q + j) > *(q + j + 1))
            {
                int temp = *(q+j);
                *(q+j) = *(q+j+1);
                *(q+j+1) = temp;
            }

        }
    }

    // Soerted elemeents are:
     printf("\n");
    printf("Sorted Elements are:\n");
    for(int i=0;i<(a+b);i++)
    {
        printf("%d ",*(q+i));
    }


}

// Main function:
int main()
{
    // to store the base address of allocated memory of 2 arrays in main function
    int *arr1;
    int *arr2;

    int *merged;



    int m,n;// size

    // size of arr1:
    printf("enter the size of arr1[]:");
    scanf("%d",&m);

    // size of arr2:
    printf("enter the size of arr2[]:");
    scanf("%d",&n);


    //DYNAMIC MEMORY ALLOCATION:
    
    //arr1[]  memory allocaTION:
    arr1 = (int*)malloc (m*sizeof(int));

    // arr2[] memory allocation:
    arr2 = (int*)malloc (n* sizeof(int));

    // 3rd  array named->merged[] memory  allocation:
    merged = (int*)malloc ((n+m)*sizeof(int));


    // Safety Check--> if maaloc fails then it returns
    if(arr1 == NULL)
    {
        printf("Memory allocation failed of arr1[]");
        return 1;
    }

    if(arr2 == NULL)
    {
        printf("Memory allocation failed of arr2[]");
        return 1;
    }

    if(merged == NULL)
    {
        printf("Memory allocation failed of merged[]");
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


    // Memory of arr2[] filled:
    printf("Arr2[] elements are such as: \n");
    for(int i=0;i<m;i++)
    {
        printf("Enter elements [%d]: ",i+1);
        scanf("%d",(arr2 +i));
    }

    // Function call:
    Merged(arr1,arr2,merged,n,m);

    // Sorting of an Element:
    Sorted(merged,n,m);
    
    // free Memory:
    free(arr1);
    arr1 =NULL;
    printf("\n Memory successfully released arr1[%d]",m);

    free(arr2);
    arr2 =NULL;
    printf("\n Memory successfully released arr2[%d]",n);

    free(merged);
    merged =NULL;
    printf("\n Memory successfully released");










    return 0;

}

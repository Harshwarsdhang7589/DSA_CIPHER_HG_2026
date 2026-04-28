// Accept n elements in an array and display the differance between the sum of 1st half  and 2nd half of that array


#include <stdio.h>
#include <stdlib.h>


//function-> to find difference
void difference(int *p,int size)
{
    int dub1=0;
    int dub2=0;
    int diff=0;

    for(int i=0;i<size;i++)
    {
        if(i<(size/2))
        {
            dub1 = *(p+i) + dub1;
        }
        else
        {
            dub2 = *(p+i) + dub2;
        }

        diff = dub2 - dub1;

        
    }
printf("Sum of 1st Half elements are:[%d] \n and 2nd Half Elements are:[%d]\n and the difference of both are [%d] ",dub1,dub2,diff);

}

// Main function:
int main()
{
   
    // to store the base address of allocated memory of 2 arrays in main function
    int m;//size

    int *arr1;

    // size of arr1:
    printf("enter the size of arr1[]:");
    scanf("%d",&m);

    //DYNAMIC MEMORY ALLOCATION:
    
    //arr1[]  memory allocaTION:
    arr1 = (int*)malloc (m*sizeof(int));

    // display array elements :
    printf("Arr1[] elements are such as: \n");
    for(int i=0;i<m;i++)
    {
        printf("Enter elements [%d]: ",i+1);
        scanf("%d",(arr1 +i));
    }


    // function call:
    difference(arr1,m);


    // Safety Check--> if maaloc fails then it returns
    if(arr1 == NULL)
    {
        printf("Memory allocation failed of arr1[]");
        return 1;
    }

    // Memory are freed:
    free(arr1);
    arr1 = NULL;
    printf("\n Memory successfully released arr1[%d]", m);






return 0;

}
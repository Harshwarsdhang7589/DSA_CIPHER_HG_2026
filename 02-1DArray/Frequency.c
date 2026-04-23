/*   
 - Write a C program which allocates an array dynamically.
- Implement logic to check the frequency of each element throughout the array
*/

#include <stdio.h>
// for Dynamic Memory Allocation:
#include <stdlib.h>

void frequency(int *p,int size,int count)
{
    printf("Frequency of the elements of an array are: ");
    for(int i=0;i<size;i++)
    {
        if(p[i] != 0)
        {
            count++;
            
        }

        if(count == size)
        {
          printf("%d ",count);
        }
    }

}

// MAIN CLASS:
int main()
{
    int n;//size
    int *arr1;
    int cnt=0;

    // size 
    printf("enter size: \n");
    scanf("%d", &n);


    //DYNAMIC MEMORY ALLOCATION:
    arr1 = (int*)malloc(n * sizeof(int));

    // safety check:
    if(arr1 ==NULL)
    {
        printf("Memory allocation fails");
        return 1;

    }

    // MAIN Logic:
    
    // Elements in memory add upps:
    printf("enter array  %d elements are: \n",n);
    for(int i=0;i<n;i++)
    {
       printf("Element[%d]: ", i + 1);
        scanf("%d", (arr1 + i));

    }
     
    // function:
    frequency(arr1,n,cnt);

    // freee memory
    free(arr1);
    arr1 = NULL;
    
    printf("\n Memory successfully released");

return 0;

}

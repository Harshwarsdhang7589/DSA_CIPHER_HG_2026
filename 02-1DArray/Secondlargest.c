/* 
  "- Write a C program which allocates an array dynamically.
- Implement logic that returns 2nd large element from the array" */


#include <stdio.h>
#include <stdlib.h>

// Logic to fill array elements are:
void accept(int *p, int n) 
{
  printf("Arr1[] elements are such as: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("Enter elements [%d]: ",i+1);
        scanf("%d",(p +i));
    }
}

// 2. Function to find the 2nd largest element
void Secondlargest(int *p, int n) {
    int max, secondlarge;

    //Find the 2nd largest element
    max = *(p + 0); // to assume that 1st element is the biggest
    for (int i = 1; i < n; i++) {
        if (*(p + i) > max) {
            max = *(p + i); // conditon: to update max if a bigger no. is found
        }
    }

    // Find the largest number that is NOT 'max'
  
    int found = 0;
    for (int i = 0; i < n; i++) 
    {
        if (*(p + i) != max)
         {
            secondlarge = *(p + i);
            found = 1;
            break; 
        }
    }

    if (found == 0) 
    {
        printf("\nAll elements are the same. No 2nd largest exists.");
        return;
    }

    // Compare the rest to find the real secondMax
    for (int i = 0; i < n; i++) 
    {
        if (*(p + i) != max && *(p + i) > secondlarge) 
        {
            secondlarge = *(p + i);
        }
    }

    printf("\nFirst Largest: %d", max);
    printf("\nSecond Largest: %d", secondlarge);
}


// Main function:
int main()
 {
    int *arr;
    int size;

    printf("Size of an array elements are ? ");
    scanf("%d", &size);

    if (size < 2)
   {
        printf("Please enter at least 2 numbers.");
        return 1;
    }

    //Dynamic Memory Allocation
    
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) 
    {
        printf("Memory allocation failed of arr[]");
        return 1;
    }

    //function display:
    accept(arr, size);
    Secondlargest(arr, size);

    // free Mmemory:
    free(arr); 
    arr = NULL;

    printf("\nMemory successfully released arr1[%d]",size);
    return 0;
}



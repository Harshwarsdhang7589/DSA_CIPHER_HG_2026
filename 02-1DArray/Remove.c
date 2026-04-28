/*
"- Write a C program which allocates an array dynamically.
- Implement logic that removes duplicate elements from the array."
  */

#include <stdio.h>
#include <stdlib.h>

// Inside Function: To use pointers to modify the original size 'n'
void removeDuplicates(int *arr, int *n)
{
    if (*n == 0 || *n == 1)
    return;

    for (int i = 0; i < *n; i++) 
    {
        for (int j = i + 1; j < *n; j++) 
        {
            // Check if element at (i == j)
            if (*(arr + i) == *(arr + j)) 
            {
                // Shift elements to the left
             for (int k = j; k < *n - 1; k++)
                {
                    *(arr + k) = *(arr + (k + 1));
                }
                
                // decrease at its memory address
                (*n)--; 
                
                // Stay at same index to check the new shifted element
                j--; 
            }
        }
    }
}

//Main Function
int main() {
    int n;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // new Memory Allocation
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    //To call function-->Passing address of n
    removeDuplicates(ptr, &n);

    // Resize the dynamic memory to fit the new size
    ptr = (int *)realloc(ptr, n * sizeof(int));

    printf("\n Cleaned Array (Duplicates Removed):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    // Free memory
    free(ptr);

    return 0;
}
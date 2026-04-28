#include <stdio.h>

int main()
{
    int arr1[10];
    int size=0, key=0, flag=0, i=0;
    int *p = arr1;

    printf("Enter size of array are max->10: ");
    scanf("%d", &size);

    
    printf("Arr1[] elements are such as: \n");
    for(int i=0;i<size;i++)
    {
        printf("Enter elements [%d]: ",i+1);
        scanf("%d",(p +i));
    }

    //  Asking for the Key
    printf("Enter the key to search: ");
    scanf("%d", &key);

    //  Searching  Loop
    for(i = 0; i < size; i++) 
    {
        if(*(p + i) == key)
        { //to  Check current element
            flag = 1;
            break; // Exit loop if found
        }
    }

   
    if(flag == 1)
     {
        printf("Key [%d] found at index [%d]\n", key, i);
    } else {
        printf("Key [%d] NOT found\n", key);
    }

    return 0;
}
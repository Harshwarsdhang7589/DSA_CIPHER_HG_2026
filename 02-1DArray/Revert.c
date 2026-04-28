/*
    Accept n elements in an array and revert the array */
#include <stdio.h>
#include <stdlib.h>

// function: belonging to the Revert-> reverse of an array:
void Revert( int *p,int a)
{


    printf("Rotated of an array elements are:\n \n");
    for(int i=0,j=a-1;i<j;i++,j--)
    {
        int temp=*(p+i);
        *(p+i)=*(p+j);// stored last ellements
        *(p+j)=temp;// stored 1st elements

    }
    //display logic:
    for(int i=0;i<(a);i++)
    {
        printf("%d \n",*(p+i));

    }

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

    // display function:
     Revert(arr1,n);

    // free Memory:
    free(arr1);
    arr1 =NULL;
    printf("\n Memory successfully released arr1[%d]",n);
  
return 0;

}


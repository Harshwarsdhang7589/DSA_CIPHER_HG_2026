/*
    "- write a C program to create memory for int, char and float variable at run time.
- create memory for int, char and float variables at run time using malloc() function
- and before exiting the program release the memory allocated at run time by using free() function."
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
void Display(int *p,char *q,float *r)
{
    printf("Results are: \n");
    
   
    printf("Integer values are:%d \n",*p);

    printf("character elements are:%c \n",*q);

     printf("Float elements are: %f \n",*r);


    
    
    
    

}

// Main function:
int main()
{
    // to store the base address of allocated memory of 2 arrays in main function
    int *arr1;
    char *ch;

    float *val;



    int m,n;// size

    // size of arr1:
    printf("enter the size of arr1[]:");
    scanf("%d",&m);


    //DYNAMIC MEMORY ALLOCATION:
    
    //arr1[]  memory allocaTION:
    arr1 = (int*)malloc (m*sizeof(int));

    // arr2[] memory allocation:
    ch = (char*)malloc (sizeof(char));

    // 3rd  array named->merged[] memory  allocation:
    val = (float*)malloc (sizeof(float));


    // Safety Check--> if maaloc fails then it returns
    if(arr1 == NULL)
    {
        printf("Memory allocation failed of arr1[]");
        return 1;
    }

    if(ch == NULL)
    {
        printf("Memory allocation failed of char[]");
        return 1;
       
    }

    if(val == NULL)
    {
        printf("Memory allocation failed of floated val");
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


    // Memory of arr2[] filled:
    printf("Character elements are such as: \n");
    
        printf("Enter character elements:");
        scanf(" %c",(ch));


        printf("Enter  float elements : ");
        scanf(" %f",val);


    // Function call:
    
    Display(arr1,ch,val);
    
    // free Memory:
    free(arr1);
    arr1 =NULL;
    printf("\n Memory successfully released of Integer");

    free(ch);
    ch =NULL;
    printf("\n Memory successfully released of charachter ");

    free(val);
    val =NULL;
    printf("\n Memory successfully released of float");


    return 0;

}

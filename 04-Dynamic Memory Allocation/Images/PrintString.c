/*
    "- write a C program to input and print text using Dynamic Memory Allocation.
- create memory for text string at run time using malloc() function, 
- text string will be inputted by the user and displayed.
- Using free() function  release the occupied memory."
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(char *p)
{
  printf("Name of string are: %s\n", p);
   // improtant: to print only p to take address of whole char elements and if to take particular each element then take the *(p+i)


}

// main function
int main()
{
    // 2 strings :
    char *name;// to accept string-->user
   

    //sizes of 1 string:
    int m;
    

    // to keep maximum size  the size of string:
    printf("Enter the maximum capacity of the string inside the name: ");
    scanf("%d", &m);// user-

    

    getchar();// to clear the buffer:


     //DYNAMIC MEMORY ALLOCATION:
    
    //char[]  memory allocaTION:
    name = (char*)malloc((m +1) * sizeof(char));



    // Safety Check--> if maaloc fails then it returns
    if(name == NULL)
    {
        printf("Memory allocation failed of arr1[]");
        return 1;
    }


    // to fill the memory with :
    printf("Enter string name : ");
    scanf("%[^\n]", name);



    // Function call:
    display(name);

    

     // free Memory:
    free(name);
    name =NULL;
    printf("\n Memory successfully released....... ");

    return 0;
}

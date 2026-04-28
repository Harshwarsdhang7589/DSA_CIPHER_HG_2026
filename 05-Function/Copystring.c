// Write a separate function to copy one string into another string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Copy(char *source,char *destination)
{
   destination =source;

   printf("Source: %s\n", source);
printf("Destination (Copy): %s\n",destination); // Display

}

// main function
int main()
{
    // 2 strings :
    char *source;// to accept string-->user
    char *destination;//to copy into other string-->source

    //sizes of 2 string:
    int m;
    int n;

    // to keep maximum size  the size of string:
    printf("Enter the maximum capacity of the string: ");
    scanf("%d", &m);// source

    n=m;//size swapping

    getchar();// to clear the buffer:


     //DYNAMIC MEMORY ALLOCATION:
    
    //arr1[]  memory allocaTION:
    source = (char*)malloc((m +1) * sizeof(char));

    destination = (char*)malloc((m +1) * sizeof(char));


    // Safety Check--> if maaloc fails then it returns
    if(source == NULL)
    {
        printf("Memory allocation failed of arr1[]");
        return 1;
    }

    if(destination == NULL)
    {
        printf("Memory allocation failed of arr1[]");
        return 1;
    }

    // to fill the memory with :
    printf("Enter string: ");
    scanf("%[^\n]", source);



    // Function call:
    Copy(source,destination);

    

     // free Memory:
    free(source);
    source =NULL;
    printf("\n Memory successfully released....... ");

    free(destination);
    destination =NULL;
    printf("\n Memory successfully released....... ");


    return 0;
}
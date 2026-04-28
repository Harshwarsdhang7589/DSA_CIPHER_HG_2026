// write a function to reverse the  strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(char *s)
{
    int size=0;

    size = strlen(s); // using nuilt-in function--> to find  the size of a string:


    char temp;

    for (int i = 0; i < size / 2; i++) {
        // 1. Save the left character
        temp = *(s + i);
        
        // 2. Put the right character into the left spot
        *(s + i) = *(s + size - 1 - i);
        
        // 3. Put the saved left character into the right spot
        *(s + size - 1 - i) = temp;
    }



}

// main function
int main()
{
    char *str;
    int m;//size

    // to keep maximum size  the size of string:
    printf("Enter the maximum capacity of the string: ");
    scanf("%d", &m);

    getchar();// to clear the buffer:


     //DYNAMIC MEMORY ALLOCATION:
    
    //arr1[]  memory allocaTION:
    str = (char*)malloc((m +1) * sizeof(char));

    // Safety Check--> if maaloc fails then it returns
    if(str == NULL)
    {
        printf("Memory allocation failed of arr1[]");
        return 1;
    }

    // to fill the memory with :
    printf("Enter string: ");
    scanf("%[^\n]", str);



    // Function call:
    Reverse(str);

    printf("Reversed String: %s\n", str);

     // free Memory:
    free(str);
    str =NULL;
    printf("\n Memory successfully released arr1[%d]",m);


    return 0;
}
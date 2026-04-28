// write a function to concatenate  two strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




// main function
int main()
{
    // 2 strings :
    char *Firstname;// to accept string-->user
    char *Secondname;//to copy into other string-->source

    //sizes of 2 string:
    int m;
    int n;

    // to keep maximum size  the size of string:
    printf("Enter the maximum capacity of the FULL NAME string: ");
    scanf("%d", &m);// source

    n=m;//size swapping

    getchar();// to clear the buffer:


     //DYNAMIC MEMORY ALLOCATION:
    
    
    Firstname = (char*)malloc((m * 4)  * sizeof(char));

    Secondname = (char*)malloc((m +1 ) * sizeof(char));


    // Safety Check--> if maaloc fails then it returns
    if(Firstname == NULL)
    {
        printf("Memory allocation failed of arr1[]");
        return 1;
    }

    if(Secondname == NULL)
    {
        printf("Memory allocation failed of arr1[]");
        return 1;
    }

    // to fill the memory with :
    printf("Enter string: ");
    scanf(" %[^\n]", Firstname);

    printf("Enter Second Name: ");
    scanf(" %[^\n]", Secondname);



    // Function call:
    strcat(Firstname, " ");//first name
    strcat(Firstname,Secondname);//last name

    printf("full name:%s\n", Firstname);


    

     // free Memory:
    free(Firstname);
    Firstname =NULL;
    printf("\n Memory successfully released....... ");

    free(Secondname);
    Secondname =NULL;
    printf("\n Memory successfully released....... ");


    return 0;
}
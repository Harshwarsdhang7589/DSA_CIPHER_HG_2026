// write a function to find the length of a string.

#include <stdio.h>

// Function to calculate length manually
int getLength(char str[])
{
    int cnt = 0;
    
    // Loop until the null terminator is reached
    while (str[cnt] != '\0')
    {
        cnt++;
    }
    
    return cnt;
}

int main() {
    // Fixed-size array
    char myString[100];
    int length;

    printf("Enter a string (max 99 characters): ");
    
    
    scanf(" %[^\n]", myString);

    // Call manual function
    length = getLength(myString);

   
    printf("The string is: %s\n", myString);
    printf("Length are: %d\n", length);
    
    return 0;
}
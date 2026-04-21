// write a  Program to count vowels and consonants in a string using pointer.harshie

#include <stdio.h>

int main() 
{
    char str[100];
    char *ptr;
    int i , j = 0;

    printf("Enter string: ");
    gets(str); // Simple way to read string 

    ptr = str; // Point to the start of the array

    while (*ptr != '\0') {
        // Handle both upper and lower case 
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
            
            if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
                *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
             {
                i++;
            } 
            else 
            {
                j++;
            }
        }
        ptr++; // to move ptr each element to nect character element
    }

    printf("Vowels: %d\nConsonants: %d", i, j);

    return 0;
}
// write a Program to read  array elements and print with addresses.
# include <stdio.h>
void modify(char *p);

int main()
{
    char str1[]="harshwardhan";

    printf("STRING VALUE ARE:%s \n",str1);

    modify(str1);// & needed

    return 0;
}

void modify(char *p)
{
    
    printf("modified value are: %s \n" ,p);
    printf("Printing char by char: ");
    while (*p != '\0') {
        printf("%c ", *p);
        p++; // Move pointer to the next character
    }
    printf("\n");
}
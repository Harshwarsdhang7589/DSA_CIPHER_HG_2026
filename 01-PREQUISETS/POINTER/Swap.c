// Write a Program to swap elements between two array using pointers.
// Swap two integers using pointers:
// ip-> a=10,b=70
// op-> a=70,b=10
#include <stdio.h>
void swap(int *p,int *q);

int main()
{
    int a=10;
    int b=70;

    printf("ORIGINAL vaLues of a:%d  \n",a);
     printf("ORIGINAL vaLues of b:%d \n",b);
     printf("\n");

    // function
    swap(&a,&b);
     printf("ORIGINAL ADDRESSS POINTING vaLues of a:%d \n \n",&a,&b);
      printf("\n");


    return 0;
}

void swap(int *p,int *q)
{
    *p=70;
    printf(" Swapped value of A are:%d \n",*p);
     printf("\n");
    *q=10;
    printf(" SWAPPED VALUE of B are:%d \n",*q);
     printf("\n");
    

}

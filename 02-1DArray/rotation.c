//accept n elements in an arrray and perfrom left rotation inr rotation of 2 elements
#include <stdio.h>
int main()
{
int i=0; //to declare outside it as an globe variable
int r;

int p,q=0;

int size;
 printf("\nenter the size of an array:");
 scanf("%d",&size);
 
int arr1[size];

printf("\nenter the elements of an array :");
for(i=0;i<size;i++){
	scanf("%d",&arr1[i]);
}
printf("\n The basic input of the elements of an array are:");
for(i=0;i<size;i++)
{
 printf(" %d",arr1[i]);
}

printf("\nenter the rotation of an element in :");
 scanf("%d",&r);
r=r%size;

//MAIN CASE
//Case 01:
int c=0;
int a=0;

//case 02
int temp[r]; 

    for(a = 0; a < r; a++)
		{  
        temp[a] = arr1[a]; 
    }
//case03 for make new rotation let array
for(int k = 0; k < size - r; k++) {
        arr1[k] = arr1[k + r]; 
}

    for(int k = 0; k < r; k++) {
        arr1[size - r + k] = temp[k]; 
    }

printf("\nArray after left rotation: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }


return 0;
}
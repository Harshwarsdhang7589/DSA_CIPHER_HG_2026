/*
   "- Create a structure ""Item"" which includes below member variables:
- itemName, quantity, price, amount.
- calculate the amount by accessing the member variable with the help of structure pointer."
*/

#include <stdio.h>

struct Item
{
    int quantity;
    float amount;
    char Itemname[200];
    float Price;

}s;

void accept(struct Item* s) // here the sturct data is called->  for use inside the fucntion:
{
    printf("----Accept the  Item Details:-----------");
    printf("\n");


    printf("enter QUANTITY:");
    scanf("%d", &s->quantity);// here & addres is normal like other scnafe -->which tells to store the elements are (except) not for strings....

    printf("enter AMOUNT:");
    scanf("%f", &s->amount);
    
    printf("enter Name of ITEM:");
    scanf("%s", s->Itemname);
    
    printf("enter Price(o.1):");
    scanf("%f", &s->Price);
    

    
};

void display(struct Item* s)
{
    printf("---Item details are-----");
    printf("\n");
    printf("Quantity:%d \n",s->quantity);
    printf("AMOUNT:%f \n",s->amount);
    printf("ITEM NAME:%s \n",s->Itemname);
    printf("ITEM PRICE:%.2f \n",s->Price);
};

int main()
{
    struct Item s;

    // functiom:
    accept(&s);// address referencing for storing the pointer in the function--->display( )
    display(&s);
   

   return 0;

}



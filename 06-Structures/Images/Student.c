/*

"- write a C program to create, declare and initialize structure.
- define a structure ""student"", which includes the details of students,
- declare an object of the structure and initialize the structure members."

*/

#include <stdio.h>

struct student
{
    int rollno;
    int age;
    char name[200];
    float marks;

}s;

void accept(struct student* s) // here the sturct data is called->  for use inside the fucntion:
{
    printf("----Accept the Details:-----------");
    printf("\n");


    printf("enter rollno:");
    scanf("%d", &s->rollno);// here & addres is normal like other scnafe -->which tells to store the elements are (except) not for strings....

    printf("enter age:");
    scanf("%d", &s->age);
    
    printf("enter Name of Student:");
    scanf("%s", s->name);
    
    printf("enter Marks(o.1):");
    scanf("%f", &s->marks);
    

    
};

void display(struct student* s)
{
    printf("---Student details are-----");
    printf("Roll no:%d \n",s->rollno);
    printf("Roll no:%d \n",s->age);
    printf("Roll no:%s \n",s->name);
    printf("Roll no:%.2f \n",s->marks);
};

int main()
{
    struct student s;

    // functiom:
    accept(&s);// address referencing for storing the pointer in the function--->display( )
    display(&s);
   

   return 0;

}



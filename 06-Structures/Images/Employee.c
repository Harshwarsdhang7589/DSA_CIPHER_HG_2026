/*
"- write a C program to read and print an employee's detail using structure.
- read and print the employee's details like name, employee id, salary etc using structure."

*/
#include <stdio.h>

struct employee
{
    int id;
    int age;
    char name[200];
    float Salary;

}s;

void accept(struct employee* s)
{
    printf("----Accept the Details:-----------");
    printf("\n");


    printf("enter EMPID:");
    scanf("%d", &s->id);// here & addres is normal like other scnafe -->which tells to store the elements are (except) not for strings....

    printf("enter EMP AGE:");
    scanf("%d", &s->age);
    
    printf("enter Name of EMP FOLKS:");
    scanf("%s", s->name);
    
    printf("enter  EMP Salary(o.1):");
    scanf("%f", &s->Salary);
    

    
};

void display(struct employee* s)
{
    printf("---Student details are-----");
    printf("EMP ID:%d \n",s->id);
    printf("EMP NAME:%d \n",s->age);
    printf("EMP AGE:%s \n",s->name);
    printf("EMP SALARY:%.2f \n",s->Salary);
};

int main()
{
    struct employee s;

    // functiom:
    accept(&s);// address referencing for storing the pointer in the function--->display( )
    display(&s);
   

   return 0;

}



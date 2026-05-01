/*
 "Write a c program which demonstrate a nested structure 
- define a structure employee inside a structure person.
- structure person data: Name, Age, Date of birth, blood group.
- structure employee data: Company name, Emp id, salary, years of experiance.                     
- create objects of structure and display the all details of a person."

*/
#include <stdio.h>

struct Person
{

    char name[200];
     int age;
     int dob;
    char BP[50];

}p1;

struct employee
{
    char companyname[200];
    int EMPID;;
    char name[200];
    float Salary;
    int YOE;
    struct Person o;

}s;

void accept(struct employee* s)
{
    printf("----Accept the Details:-----------");
    printf("\n");


    printf("Enter Company Name: ");
    scanf("%s", s->companyname);

    printf("Enter EMPID: ");
    scanf("%d", &s->EMPID);


    printf("Enter Year of Experience: ");
    scanf("%d", &s->YOE);

    printf("Enter Company Salary: ");
    scanf("%f", &s->Salary);

    printf("Enter Employee Name: ");
    scanf("%s", s->name);

    printf("\n");


    printf("*******Person Details***");

    printf("Person Name:");
    scanf("%s", s->o.name);

    printf("Person Age:");
    scanf("%d", &s->o.age);

    printf("Person Date of Birth:");
    scanf("%d",&s->o.dob);

    printf("Person Blod Group:");
    scanf("%d", s->o.BP);

    printf("\n");
    
};

void display(struct employee* s)
{
    printf("\n");

    printf("display Employee Details :-------");
      printf("Enter Company Name: %s \n",s->companyname);

      printf("display Per Details :-------");
      printf("Enter Person age: %d \n",s->o.age);



   

};

int main()
{
    struct employee s;

    // functiom:
    accept(&s);// address referencing for storing the pointer in the function--->display( )
    display(&s);
   

   return 0;

}



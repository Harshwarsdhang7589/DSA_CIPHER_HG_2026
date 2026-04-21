#include <stdio.h>

// 1. Define the structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

void manageStudent() {
    struct Student s1;         
    struct Student *ptr = &s1;


    // use of pointer to fetch details: 
    printf("Enter Name: ");
    scanf("%s", ptr->name);
    
    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);
    
    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    // use of pointer of displaying the detsild
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
}

int main() {
    manageStudent();
    return 0;
}
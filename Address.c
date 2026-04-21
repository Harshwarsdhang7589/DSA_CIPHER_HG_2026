// write Program to print addresses and size of all types of pointer variables.
#include <stdio.h>

void showPointerInfo() {
    // Initializing data types
    int i = 1;

    double d = 1.1;

    // to Assign their addresses to pointers
    int *ptr_i = &i;
    double *ptr_d = &d;

    printf("Integer:  %p \n %d bytes\n", (void*)ptr_i, (int)sizeof(ptr_i));

    printf("Double:    %p \n %d bytes\n", (void*)ptr_d, (int)sizeof(ptr_d));
}

int main() {
    showPointerInfo();
    return 0;
}
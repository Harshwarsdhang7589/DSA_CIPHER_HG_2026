#include <stdio.h>

int main() {
    int i, j;
    int matrix[4][4];

    printf("Enter elements for a 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n--- Assignment 07 Pattern ---\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(i == j) {
                printf("* "); // Diagonal
            } else if (j > i) {
                printf("1 "); // Upper triangle
            } else {
                printf("0 "); // Lower triangle
            }
        }
        printf("\n");
    }
    return 0;
}
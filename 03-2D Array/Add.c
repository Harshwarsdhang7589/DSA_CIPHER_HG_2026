/*

   Accept  two different n*m matrix and store and display the addition of two matrix in 3rd matrix*/

#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int n, m, i, j;
    printf("Rows and Cols: ");
    scanf("%d %d", &n, &m);

    // Allocate row pointers for 3 matrices
    int **A = malloc(n * sizeof(int *));
    int **B = malloc(n * sizeof(int *));
    int **C = malloc(n * sizeof(int *));

    for (i = 0; i < n; i++) {
        // Allocate columns for each row
        A[i] = malloc(m * sizeof(int));
        B[i] = malloc(m * sizeof(int));
        C[i] = malloc(m * sizeof(int));
    }

   
    printf("Enter A:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) scanf("%d", &A[i][j]);

    // Input Matrix B and add to A 
    printf("Enter B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
            C[i][j] = A[i][j] + B[i][j]; 
            printf("%d ", C[i][j]);      // Display result 
        }
        printf("\n");
    }
    return 0; 
}
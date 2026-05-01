#include <stdio.h>
#include <stdlib.h>

//  to calculate and display various sum and elements
void processArray(int **arr, int N, int M) {
    int sumAll = 0, sumCol2 = 0;
    int sumLeftDiag = 0, sumRightDiag = 0;
    int maxLeft, minLeft, maxRight, minRight;

    //  Sum of all elements
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            sumAll += arr[i][j];
        }
    }

    //  Sum of elements from the 2nd column (index 1)
    if (M >= 2) {
        for (int i = 0; i < N; i++) 
        {
            sumCol2 += arr[i][1];
        }
    }

    //  Diagonal Operations (Only possible for Square Matrices)
    if (N == M) {
        maxLeft = minLeft = arr[0][0];
        maxRight = minRight = arr[0][N - 1];

        printf("\nLeft Diagonal: ");
        for (int i = 0; i < N; i++) {
            int val = arr[i][i];
            printf("%d ", val);
            sumLeftDiag += val;
            if (val > maxLeft) maxLeft = val;
            if (val < minLeft) minLeft = val;
        }

        printf("\nRight Diagonal: ");
        for (int i = 0; i < N; i++) {
            int val = arr[i][N - 1 - i];
            printf("%d ", val);
            sumRightDiag += val;
            if (val > maxRight) maxRight = val;
            if (val < minRight) minRight = val;
        }

        printf("\n\n--- Results ---");
        printf("\nSum of all elements: %d", sumAll);
        printf("\nSum of 2nd column: %d", sumCol2);
        printf("\nSum of Left Diagonal: %d", sumLeftDiag);
        printf("\nSum of Right Diagonal: %d", sumRightDiag);
        printf("\nLeft Diagonal -> Max: %d, Min: %d", maxLeft, minLeft);
        printf("\nRight Diagonal -> Max: %d, Min: %d", maxRight, minRight);
    } else {
        printf("\nDiagonal operations require a square matrix (N=M).");
    }
}


void sortDiagonals(int **arr, int N)
 {
    int temp;
    // Sort Left Diagonal
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) 
        {
            if (arr[j][j] > arr[j + 1][j + 1])
             {
                temp = arr[j][j];
                arr[j][j] = arr[j + 1][j + 1];
                arr[j + 1][j + 1] = temp;
            }
        }
    }

    
    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j][N - 1 - j] > arr[j + 1][N - 1 - (j + 1)])
             {
                temp = arr[j][N - 1 - j];
                arr[j][N - 1 - j] = arr[j + 1][N - 1 - (j + 1)];
                arr[j + 1][N - 1 - (j + 1)] = temp;
            }
        }
    }
}

int main()
 {
    int N, M;
    printf("Enter rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);

  
    int **arr = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        arr[i] = (int *)malloc(M * sizeof(int));
    }

    printf("Enter elements:\n");
    for (int i = 0; i < N; i++)
     {
        for (int j = 0; j < M; j++)
         {
            scanf("%d", &arr[i][j]);
        }
    }

    processArray(arr, N, M);

    if (N == M) {
        sortDiagonals(arr, N);
        printf("\n\nDiagonals have been sorted. Current Matrix State:");
        for (int i = 0; i < N; i++) 
        {
            printf("\n");
            for (int j = 0; j < M; j++) printf("%d ", arr[i][j]);
        }
    }

    // Free Memory
    for (int i = 0; i < N; i++) free(arr[i]);
    free(arr);

    return 0;
}
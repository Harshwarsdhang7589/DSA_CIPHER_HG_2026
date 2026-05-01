// Accept elements in 4*4 matrix and display the Transpose of matrix
#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main()
{
    //for part 1:Input-->  " Enter the rows and columns of matrix are: "

    int a[MAX][MAX],b[MAX][MAX];
    int arows,acolumn,brows,bcolumn;

    int product[MAX][MAX];
      int sum=0;
      int i=0;
      int j=0;


    // for A Matrices:

    printf("Enter the rows and column of the matrix are for A[][]: \n");
    scanf("%d %d", &arows, &acolumn);

    //PART II:

    /*
      Enter thr elements of an matrix are:
      1 2 3 
      1 2 1
      3 1 2
      */

      printf("Enter the elements of an matrix are A Matrix: \n");

      for(i=0;i<arows;i++)
      {
        for( j=0;j<acolumn;j++)
        {
            scanf("%d", &a[i][j]);
        }
      }

      
    return 0;
    }
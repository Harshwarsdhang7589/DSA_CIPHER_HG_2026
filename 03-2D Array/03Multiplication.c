// Accept elements in two n*m matrix and display the multiplication of two matrix

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


      // for B Matrices:

    printf("Enter the rows and column of the matrix are for B[][]: \n");
    scanf("%d %d", &brows, &bcolumn);

    if(brows !=acolumn)
    {
        printf("Sorry,we cannot multiply the matrices of a and B are:");
    }
    else
    {
        printf("\n");

        printf("Enter the elements of an matrix are B Matrix are: \n");

      for(i=0;i<brows;i++)
      {
        for(j=0;j<bcolumn;j++)
        {
            scanf("%d", &b[i][j]);
        }
      }
      
    }

    printf("\n");


    //PART II:

    /*
      Enter thr elements of an matrix for BMatrices B[][]:
      1 2 3 
      1 2 1
      3 1 2
      */


      // RESULTANT Matrix: [ direct mulitplication of 2 matrix answer are-->]

   /* 12  09  11
      06  07  07
      10  10  14  */

      

      for( i=0;i<brows;i++)
      {
        for( j=0;j<bcolumn;j++)
        {
            for(int k=0;k<brows;k++)
            {
                sum =sum + (a[i][k] * b[k][j]);
            }

            product[i][j] = sum;
            sum=0;
        }
      }

      //Printing the array elements are:
      printf("Resultant Matrix are:\n");
      for( i=0;i<arows;i++)
      {
        for(j=0;j<bcolumn;j++)
        {
            printf("%d ", product[i][j]);

        }

        printf("\n ");

      }

      return 0;

}
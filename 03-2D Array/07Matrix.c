/*

   "Accept  4*4 matrix and display the following patern

/*

  1 1 1 *
  1 1 * 0
  1 * 0 0
  * 0 0 0  
  
*/
#include <stdio.h>
int main() 
{
    for(int i = 0; i <= 4; i++)
    {
        // Inner loop condition fixed: runs (6 - i) times
        for(int j = 1; j <= (4 - i); j++)
        {
            printf("* "); // Removed redundant 'i' argument
        }
        printf("\n"); // Removed "%d" to avoid printing line numbers
    }
    return 0;
}
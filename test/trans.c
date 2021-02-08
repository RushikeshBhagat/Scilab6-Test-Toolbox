#include <stdio.h>
#include <stdlib.h>
#include "trans.h"
void transpose(int **arr1, int row, int col)
{
   int i, j;
   int trans[10][10];
   for(i = 0; i < row; i++)
   {
        for(j = 0; j < col; j++)
        {
            trans[j][i] = (*arr1)[j];  
        }
     arr1++;
    }

   printf("\nTranspose of matrix is as follows:\n");
   for(i = 0; i < col; i++)
   {
        for(j = 0; j < row; j++)
        {
            printf("%d\t", trans[i][j]);
            if(j==row-1)
               printf("\n");
        }
       
    }
}
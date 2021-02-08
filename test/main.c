#include <stdio.h>
#include <stdlib.h>
#include "trans.h"
int main()
{
  int row,column,i,j;
  printf("Enter rows and columns: ");
  scanf("%d %d", &row, &column);

  int **a=(int **)malloc(row*sizeof(int *));

  for(int r=0;r<row;r++)
  {
    a[r]=(int *)malloc(column*sizeof(int));
    //b[r]=(int *)malloc(column*sizeof(int));
  }
  printf("\nEnter matrix elements:\n");
    for (i = 0; i < row; ++i)
      for (j = 0; j < column; ++j) 
        {
          printf("Enter element a%d%d: ", i + 1, j + 1);
          scanf("%d", &a[i][j]);
        }

  transpose(a,row,column);
 
  for(int k=0;k<row;k++)
      {
        free(a[k]);
        //free(b[k]);
      }
  free(a);
  //free(b);

  //getchar();
  system("pause"); 
  return 0;
}
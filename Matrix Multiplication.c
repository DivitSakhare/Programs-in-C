#include<stdio.h>
#include <stdlib.h>
int main()
{
  int  p, q, m, n, k, total = 0;
  int first[10][10], second[10][10], multiply[10][10];

  printf(" Please insert the number of rows and columns for first matrix \n ");
  scanf("%d%d", &m, &n);

  printf(" Insert your matrix elements : \n ");
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &first[i][j]);
 
  printf(" Please insert the number of rows and columns for second matrix\n");
  scanf(" %d %d", &p, &q);

  if (n != p)
    printf(" Your given matrices cannot be multiplied with each other. \n ");
  else
  {
    printf(" Insert your elements for second matrix \n ");
 
    for (int i = 0; i < p; i++)
      for (int j = 0; j < q; j++)
        scanf("%d", &second[i][j] );

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < q; j++) {
        for (k = 0; k < p; k++) {
          total = total + first[i][k] * second[k][j];
        }
        multiply[i][j] = total;
        total = 0;
      }
    }
 
    printf(" The result of matrix multiplication or product of the matrices is: \n ");
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < q; j++)
        printf("%d   ", multiply[i][j] );
      printf(" \n ");
    }
  }
  return 0;
}

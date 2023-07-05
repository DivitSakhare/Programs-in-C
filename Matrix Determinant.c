#include <stdio.h>

int main()
{
    int a[100] [100],i,j,det=0;
    printf("Enter elements in the matrix:- \n");
    for ( i = 0; i<3; i++)
    {
        for ( j = 0; j<3; j++)
        {
            printf("enter elements in the matrix:- [%d][%d]: ",i,j);
            scanf("%4d", &a[i][j]);
        }
    }
    printf("Matrix is: \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("% d", a[i][j]);
            
        }
        printf("\n");
    }
    for (i=0; i<3; i++)
    {
        det = det + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));
    }
    printf("determinant of  the matrix is: %d\n", det);
    return 0;
}

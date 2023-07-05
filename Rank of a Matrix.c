#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int a[10][10],i,j,m,n;
int rank(int, int);
void swap(int,int,int);
void fget(int, int);
void display(int, int);
int main()
{
   int rnk;
   printf("enter the order of matrix (row and col size):\n");
   scanf("%d%d",&m,&n);
   fget(m, n);
   display(m,n);
   rnk= rank(m,n);
   printf("\n\nThe rank of above matrix is: %d\n", rnk);
   return 0;
}
/** Function reading the matrix row by row **/
void fget(int r,int c)
{
   printf("Enter %d x %d order matrix values(Row by Row) :\n",r,c);
   for(i=0;i<r;i++)
      for(j=0;j<c;j++)
       scanf("%d",&a[i][j]);
}

/** function display matrix **/
void display(int r, int c)
{
   printf("Matrix is : \n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
       printf("%4d",a[i][j]);
      printf("\n");
   }
}
/** This function exchange two rows of a matrix **/
void swap(int r1, int r2, int c)
{
   int t;
   for(i=0;i<c;i++)
   {
      t= a[r1][i];
      a[r1][i] = a[r2][i];
      a[r2][i]=t;
   }
}
/**This function find rank of matrix **/
int rank(int r1, int c1)
{
    int i,j,k;
    float ratio;
    for(i=0;i<c1;i++)
    {
       printf("\nSTEP = %d\n",i+1);
       display(m,n);
       if(a[i][i]!=0)    /* Diagonal element is not zero */
     for(j=0;j<r1;j++)
       if (j!=i)
       {
          /* Make all the element above and below the current principal diagonal element zero */
          ratio = a[j][i]/a[i][i];
          for(k=0;k<c1;k++)
         a[j][k]-=ratio*a[i][k];
       }
       else
         printf("\n");
         /* principal Diagonal element is zero */
       else
       {
       for(j=i+1;j<r1;j++)
          if(a[j][i]!=0)
          {   /* Find non zero elements in the same column */
          swap(i,j,c1);
          break;
          }
          if(j==r1)
          {
          c1--;
          for(j=0;j<r1;j++)
             a[j][i] = a[j][c1];
          }
          i--;
         }
     }
   return  c1;
}

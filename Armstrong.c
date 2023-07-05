#include <stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        r = n % 10;
        sum = sum + (r*r*r);
        n=n/10;
    }
    if (temp==sum)
    {
        printf("sum is %d \n",sum) && printf("its an armstrong number \n");
    }
    else
      printf("sum is %d \n", sum) && printf("its not an armstrong number \n");
    return 0;
}


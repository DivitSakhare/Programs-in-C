#include <stdio.h>
    int main()
    {
        int a=1,n,i;
        for(n=3;n>0;n--)
        {
            for (i=1; i<=n; i++)
            {
                printf("%d ",a);
                a++;
            }
            printf("\n");
        }
        for (n=2; n<=3; n++)
        {
            for (i=1; i<=n; i++)
            {
                printf("%d ",a);
                a++;
            }
            printf("\n");
        }
        return 0;
    }

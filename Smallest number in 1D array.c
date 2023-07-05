#include <stdio.h>

int main()
{
    int a[30],small,n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n\nEnter element of the array: ");
        scanf("%d", &a[i]);
    }
    small = a[0];
    for (int i = 0; i<n; i++)
    {
        if(a[i]<small)
        {
            small = a[i];
        }
    }
    printf("\nSmallest number in the array is: %d\n", small);
    return 0;
}

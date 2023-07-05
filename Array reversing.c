#include <stdio.h>

int main()
{
    int a[50], n, temp;
    printf("Enter number of elements you want in array: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        printf("enter element of the array: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for (int i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

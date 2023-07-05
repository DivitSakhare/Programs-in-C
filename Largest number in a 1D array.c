#include <stdio.h>

int main()
{
    int a[50],num,large;
    printf("Enter number of elements for the array: ");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter element of the array: ");
        scanf("%d", &a[i]);
    }
    large = a[0];
    for (int i = 0; i<num; i++)
    {
        if(a[i] > large)
        {
            large = a[i];
        }
    }
    printf("Largest number in the array is: %d\n\n", large);
    return 0;
}

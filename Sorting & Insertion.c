#include <stdio.h>
int main()
{
    int array[10];
    int i, j, n, m, temp, key, numpy = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    

    for (i = 0; i < n; i++)
    {
        printf("enter the element in array: ");
        scanf("%d", &array[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
         }
    }

    printf("Sorted list is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("\nEnter the element to be inserted: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key < array[i])
        {
            numpy = i;
            break;
        }
        if (key > array[n-1])
        {
            numpy = n;
            break;
        }
    }
    if (numpy != n)
    {
        m = n - numpy + 1 ;
        for (i = 0; i <= m; i++)
        {
            array[n - i + 2] = array[n - i + 1] ;
        }
    }

    array[numpy] = key;
    printf("\n");
    printf("Final list is: ");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

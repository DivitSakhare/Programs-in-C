#include <stdio.h>
 
 
int main()
{
    int a[10],i,n,search;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the value you want to search : ");
    scanf("%d", &search);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==search)
        {
            printf("element found at the position, matches your search!!");
            return 0;
        }
 
    }
    
    printf("element  not  found");
}

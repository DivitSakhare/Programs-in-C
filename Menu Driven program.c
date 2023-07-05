#include <stdio.h>

int main()
{
    int select;
    do
    {
        int num,remainder, rev=0,orig, i=1,n,term,term1,term2,s = 0, sum = 0;
        printf(" Press 1 for Palindrome \n Press 2 for Fibonacci series \n Press 3 To find the numbers and sum of all integer between 100 and 200 which are divisible by both 3 & 5\n Press 4 to EXIT!!\n");
        printf("\nENTER YOUR CHOICE BETWEEN 1-4:  ");
        scanf("%d", &select);
        switch (select)
        {
            case 1:
                
            {
                printf("enter number you wana check PANILDROME for: ");
                scanf("%d", &num);
                orig = num;
                while (num>0)
                {
                    remainder = num % 10;
                    rev = rev * 10 + remainder;
                    num = num /10;
                }
                if (orig == rev){
                    printf("\n\nIts a palindrome number\n\n");
                }
                else
                    printf("\n\nIts not a palindrome\n\n");
                break;
            }
            case 2:
                
            {
                
                printf("ENTER VALUE TILL YOU WANT TO PRINT FIBONACCI SERIES: ");
                scanf("%d",&n);
                term=0;
                term1=1;
                term2=1;
                do
                {
                    i++;
                    printf("%d  ",term);
                    term1=term2;
                    term2=term;
                    term=term1+term2;
                    s = s + term2;
                }
                while(i<=n);
                printf("\nSum is: %d\n",s);
                break;
            }
            case 3:
            {
                for (int yum = 100; yum <= 200; yum++)
                {
                    if(yum % 3 == 0 && yum % 5 == 0)
                    {
                        printf("%d \n", yum);
                        sum = sum + yum;
                    }
                    
                }
                printf("\nsum of all numbers divisible by 3 & 5 lying between 100 to 200 is: %d\n\n", sum);
                break;
            }
            case 4:
            {
                printf("\n\nYOU HAVE EXITED THE MENU SUCCESSFULLY...!!\n");
                break;
            }
            default:
                printf("enter a number from 1-4");
                break;
            
        }
        
    } while (select != 4);
    return 0;
}

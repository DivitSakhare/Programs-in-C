#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,r1,r2,d;
    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): "); printf("\nENTER VALUE OF 'a': ");
 
    scanf("%f", &a);
    printf("\nENTER VALUE OF 'b': "); scanf("%f", &b);
    printf("\nENTER VALUE OF 'c': "); scanf("%f", &c);
    d= b*b - 4*a*c;
    if (d>0)
    {
        r1 = (-b+sqrt (d)) / (2*a);
        r2 = (-b-sqrt (d)) / (2*a);
        printf ("\nThe real roots = %f%f\n\n", r1, r2);
    }
    else if (d==0)
    {
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf ("\nroots are equal =%f%f\n\n", r1, r2);
    }
    else
        printf("\nRoots are imaginary\n\n");
    return 0;
}

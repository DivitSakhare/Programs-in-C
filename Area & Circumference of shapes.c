// Program to find area and circumference of various Geometric shapes
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() 
{
                                                            //for circle
    float radius;
    float pi=3.14;
    printf("#FOR CIRCLE#\n");
    printf("Enter Radius:");
    scanf("%f", &radius);
    printf("AREA=%f", radius * radius * pi);
    printf("\nCIRCUMFERENCE: %f", 2 * pi * radius);
    
                                                            //for rectangle
    float length, breadth;
    printf("\n\n #FOR RECTANGLE#\n");
    printf("enter length:");
    scanf("%f", &length);
    printf("enter breadth:");
    scanf("%f", &breadth);
    printf("AREA=%f",length * breadth);
    printf("\nCIRCUMFERENCE=%f",2 * (length + breadth));
                                                            //for triangle
    float side1, side2, side3, s , m;
    printf("\n \n#FOR TRIANGLE#\n");
    printf("enter first side of triangle: ");
    scanf("%f", &side1);
    printf("enter second side of triangle: ");
    scanf("%f", &side2);
    printf("enter third side of triangle: ");
    scanf("%f", &side3);
    s = (side1 + side2 + side3)/2;
    m = sqrt (s * (s-side1)*(s-side2)*(s-side3));
    printf("AREA=%f", m);
    printf("\ncircumference=%f", side1 + side2 + side3);
                                                          //for square
    float side;
    printf("\n\n#FOR SQUARE#\n");
    printf("enter the side of square: ");
    scanf("%f", &side);
    printf("AREA=%f", side * side);
    printf("\nCIRCUMFERENCE=%f\n\n", 4 * side);
    return 0;
}

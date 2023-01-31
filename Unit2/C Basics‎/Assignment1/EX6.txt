#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write Source Code to Swap Two Numbers

    float a,b;
    printf("Enter value of a: ");
    fflush(stdout);
    fflush(stdin);
    scanf("%f",&a);
    printf("Enter value of b: ");
    fflush(stdout);
    fflush(stdin);
    scanf("%f",&b);
    float temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %f",a);
    printf("\nAfter swapping, value of b = %f",b);
    return 0;
}

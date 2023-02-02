#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write C Program to Multiply two Floating Point Numbers

    float num1 , num2;
    printf("Enter two integers: ");
    fflush(stdout);
    fflush(stdin);
    scanf("%f%f",&num1,&num2);
    printf("Product: %f",num1*num2);
    return 0;
}

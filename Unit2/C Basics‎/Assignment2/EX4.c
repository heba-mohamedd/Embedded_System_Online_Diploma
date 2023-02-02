#include <stdio.h>
#include <stdlib.h>

int main()
{
    //*************  EX4  **************
    // program to Check Whether a Number is Positive OR Negative

    float a ;

    printf("Enter a number : ");
    scanf("%f",&a);

    if(a > 0.0) printf("%.2f is positive",a);
    else if(a < 0.0) printf("%.2f is Negative",a);
    else printf("You entered zero.");
    return 0;
}

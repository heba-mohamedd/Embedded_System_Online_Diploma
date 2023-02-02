#include <stdio.h>
#include <stdlib.h>

int main()
{

    //************EX3*************
    // C Program to find the largest number among Three numbers

    float a , b , c;
    printf("enter three numbers : ");
    fflush(stdout);fflush(stdin);
    scanf("%f %f %f",&a,&b,&c);
    if(a >= b)
    {
        if(a > c) printf("largest number = %f",a);
        else printf("largest number = %f",c);
    }
    else
    {
        if(b > c) printf("largest number = %f",b);
        else printf("largest number = %f",c);

    }


    return 0;
}

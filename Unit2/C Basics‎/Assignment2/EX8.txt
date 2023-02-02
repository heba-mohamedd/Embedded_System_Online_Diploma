#include <stdio.h>
#include <stdlib.h>

int main()
{

    //***************EX8************
    //C program to Make a simple calculator to Add , subtract , Multiply or Divide Using switch...case
    char c;
    float a , b , result;

    printf("Enter operator either + or - or * or divide : ");
    fflush(stdout);fflush(stdin);
    scanf("%c",&c);

    printf("Enter two operands : ");
    fflush(stdout);fflush(stdin);
    scanf("%f %f",&a,&b);


    switch(c)
    {
    case '+':
        result = a + b;
        printf("%.3f + %.3f = %.3f",a,b,result);
        break;
    case '-':
        result = a - b;
        printf("%.3f - %.3f = %.3f",a,b,result);
        break;
    case '*':
        result = a * b;
        printf("%.3f * %.3f = %.3f",a,b,result);
        break;
    case '/':
        result = a / b;
        printf("%.3f / %.3f = %.3f",a,b,result);
        break;
        default:
            printf("Error !!");
            break;
    }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
     //************EX1*************
    //Check a number is even or odd

    int num1 ;
    printf("Enter an integer you want to check : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&num1);

    if(num1%2 == 0)
        printf("%d is even",num1);
    else
        printf("%d is odd",num1);

    return 0;
}

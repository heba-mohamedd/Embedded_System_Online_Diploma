#include <stdio.h>
#include <stdlib.h>

int main()
{

    //***************EX7************
    //C program to find Factorial of a number

    int X , i = 1 ,Factorial = 1;
    printf("Enter a integer : ");
    fflush(stdout);
    fflush(stdin);
    scanf("%d",&X);
    if(X >= 0)
    {
        while(i <= X)
        {
            Factorial *= i;
            i++;
        }
        printf("Factorial = %d", Factorial);
    }
    else printf("Error!!! Factorial of negative number doesn't exist .");


    return 0;
}

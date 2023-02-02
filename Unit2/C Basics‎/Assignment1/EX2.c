#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write C Program to Print a Integer Entered by a User

    int x;
    printf("Enter a integer: ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&x);
    printf("You entered: %d",x);

    return 0;
}

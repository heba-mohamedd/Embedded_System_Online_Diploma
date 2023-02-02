#include <stdio.h>
#include <stdlib.h>

int main()
{
    //***************EX5************
    //C program to check whether a character is an alphabet or not

    char X;
    printf("Enter a character : ");
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&X);

    if((X >= 65 && X <=90 )||(X >=97 && X <= 122)) printf("%c is an alphabet",X);
    else printf("%c is not an alphabet",X);


    return 0;
}

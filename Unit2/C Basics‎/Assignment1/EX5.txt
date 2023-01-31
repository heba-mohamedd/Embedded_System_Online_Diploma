#include <stdio.h>
#include <stdlib.h>

int main()
{
    //write C Program to Find ASCII Value of a Character

    char CHAR ;
    printf("Enter a character:");
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&CHAR);
    printf("ASCII value of %c = %d",CHAR ,CHAR);

    return 0;
}

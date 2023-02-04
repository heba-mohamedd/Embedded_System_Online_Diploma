#include <stdio.h>
#include <stdlib.h>

int main()
{
    //C program to Find the Length of a string

    char str[100];
    int count ,i = 0;

    printf("Enter a string : ");
    fflush(stdout);fflush(stdin);
    scanf("%s", str);
    //gets(str);


    while(str[i] != '\0')
    {
        i++;
        count++;
    }

    printf("Length of string : %d",count);
    return 0;
}

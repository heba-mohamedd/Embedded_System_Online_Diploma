#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //C program to reverse String without using library function
    char str[50];
    char rev[50];

    printf("Enter a string : ");
    fflush(stdout);fflush(stdin);
    scanf("%s",str);   //gets(str);
    int i ,j;

    for(i = strlen(str)-1,j =0 ;i >= 0; i--,j++)
    {
        rev[j] = str[i];
    }

    printf("reverse string is : %s",rev);
    return 0;
}

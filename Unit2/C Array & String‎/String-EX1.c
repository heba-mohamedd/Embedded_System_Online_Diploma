#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // C program to find the Frequency of Characters in a String
    char str[100];
    char c ;
    int count = 0;


    printf("Enter a String : ");
    gets(str);

    printf("Enter a Character to find frequency : ");
    fflush(stdout);fflush(stdin);
    scanf("%c",&c);


    //counting a Frequency of character
    for(int i =0 ; i < strlen(str) ; i++)
    {
        if(str[i] == c) count++;
    }
    printf("Frequency of %c = %d",c,count);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //************EX2*************
    // C Program to check Vowel OR Consonant
    char C;
    printf("enter an alphabet :  ");
    fflush(stdout);fflush(stdin);
    scanf("%c",&C);
    if(C == 'a'||C == 'e'||C == 'i'|| C == 'o'|| C == 'u' ||C == 'A'||C == 'E'||C == 'I'|| C == 'O'|| C == 'U')
        printf("%c is an Vowel",C);
     else
        printf("%c is an consonant",C);

    return 0;
}

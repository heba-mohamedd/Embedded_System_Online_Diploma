#include <stdio.h>
#include <stdlib.h>

int main()
{

    //***************EX6************
    //C program to calculate sum of natural numbers
    int X , Sum = 0;
    printf("Enter a integer : ");
    fflush(stdout);
    fflush(stdin);
    scanf("%d",&X);
    for(int i = 0 ; i<=X ; i++) Sum +=i;

    printf("Sum = %d" , Sum);


    return 0;
}

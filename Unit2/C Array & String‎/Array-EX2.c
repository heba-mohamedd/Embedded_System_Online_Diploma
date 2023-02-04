#include <stdio.h>
#include <stdlib.h>

int main()
{
    // C program to Calculate Average Using Arrays

    float arr[100];
    float sum =0.0;
    int n ;
    printf("Enter the numbers of data :");
    fflush(stdout);fflush(stdin);
    scanf("%d" ,&n);

    for(int i =0 ;i <n ; i++)
    {
        printf("%d . Enter number :  ",i+1);
        fflush(stdout);fflush(stdin);
        scanf("%f",&arr[i]);
    }

    for(int i =0 ;i <n ; i++)
    {
        sum = sum + arr[i];
    }
    printf("Average : %.3f",sum/n);

    return 0;
}

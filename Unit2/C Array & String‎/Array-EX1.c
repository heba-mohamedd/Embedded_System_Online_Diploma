#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Write a C program to find sum of two matrix of order 2*2 using multidimansional arrays where, elements of matrix are entered by user.

    float a[2][2];
    float b[2][2];

    // enter the element of frist Matrix
    printf("Enter the elements of 1st matrix \n");
    for(int r= 0 ;r < 2 ; r++)
    {
        for(int c =0 ;c < 2 ; c++)
        {
                    printf("Enter a(%d , %d) : " ,r+1,c+1);
                    fflush(stdout);fflush(stdin);
                    scanf("%f",&a[r][c]);
        }
    }

    // enter the element of frist Matrix

    printf("Enter the elements of 2st matrix \n");
    for(int r= 0 ;r < 2 ; r++)
    {
        for(int c =0 ;c < 2 ; c++)
        {
                    printf("Enter b(%d , %d) : " ,r+1,c+1);
                    fflush(stdout);fflush(stdin);
                    scanf("%f",&b[r][c]);
        }
    }

    //sum of 2 matrix
    printf("Sum of Matrix \n");
    for(int r= 0 ;r < 2 ; r++)
    {
        for(int c =0 ;c < 2 ; c++)
        {
            printf("%.2f     " ,a[r][c]+b[r][c]);
        }
        printf("\n");
    }


    return 0;
}

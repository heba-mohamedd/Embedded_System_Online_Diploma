#include <stdio.h>
#include <stdlib.h>

int main()
{

    //C program to find transpose of a Matrix
    int r ,c;
    int arr[10][10];
    printf("Enter rows and column of matrix : ");
    fflush(stdout);fflush(stdin);
    scanf("%d%d",&r,&c);

    printf("Enter elements of matrix :\n");
    for(int i =0 ;i < r; i++)
    {
        for(int j = 0 ;j < c ; j++)
        {
            printf("Enter element a (%d , %d) : ",i+1 ,j+1);
            fflush(stdout);fflush(stdin);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Entered Matrix\n");
    for(int i =0 ;i < r; i++)
    {
        for(int j = 0 ;j < c ; j++)
        {
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix\n");
    for(int i =0 ;i < c; i++)
    {
        for(int j = 0 ;j < r ; j++)
        {
            printf("%d    ",arr[j][i]);
        }
        printf("\n");
    }



    return 0;
}

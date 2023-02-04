#include <stdio.h>
#include <stdlib.h>

int main()
{
    // C program to search an element in array
    int n , num;
    int arr[100] = {0};

    printf("Enter no of elements : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&n);

    for(int i =0 ;i < n ; i++) scanf("%d",&arr[i]);

    printf("Enter the elements to be searched : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&num);

    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i] == num)
        {
            printf("Number found at the location = %d",i+1);
        }
    }


    return 0;
}

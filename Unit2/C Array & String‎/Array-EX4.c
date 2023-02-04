#include <stdio.h>
#include <stdlib.h>

int main()
{
    //C program to insert an element in an array
    int arr[100] = {0};
    int n ,num,loc;

    printf("Enter no of elements : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&n);


    //initial array of size n
    for(int i =0 ;i <n ; i++) scanf("%d",&arr[i]);


    // element to be inserted
    printf("Enter the element to be inserted : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&num);



    printf("Enter the location : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&loc);

    //increase size by 1
    n++;


    // shift elements forward
    for(int i = n-1 ; i >=loc ; i--)
    {
        arr[i] =arr[i-1];
    }

    arr[loc-1] = num;

    // print the updated array
    printf("updated Array : \n");
    for(int i =0 ;i <n ; i++) printf("%d    ",arr[i]);

    return 0;
}

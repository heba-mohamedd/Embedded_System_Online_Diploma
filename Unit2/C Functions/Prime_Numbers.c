#include <stdio.h>
void Prime_number(int num1 , int num2);



int main()
{
	int n1,n2;
	printf("Enter two numbers(intervals) : ");
	fflush(stdout);
    fflush(stdin);
	scanf("%d%d",&n1,&n2);
	
	printf("prime numbers between %d and %d are : ",n1,n2);
	Prime_number(n1 , n2);
	
	return 0;
}

void Prime_number(int num1 , int num2)
{
	int flag ;
	if(num1 == 1) num1++;
	for(int i = num1 ; i <= num2 ; i++)
	{
		flag = 0;
		for(int j = 2 ; j<i ;j++)
		{
			
			if(i%j == 0 )
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			printf("%d  ",i);
			
		}
		
	
	}
}
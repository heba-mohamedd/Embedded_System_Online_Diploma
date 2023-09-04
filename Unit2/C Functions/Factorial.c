#include <stdio.h>

long int Factorial(unsigned int num);

int main()
{
	unsigned int n;
	printf("Enter an positive integer : ");
	fflush(stdout);
    fflush(stdin);
	scanf("%d",&n);
	printf("Factorial of %d = %ld",n,Factorial(n));
	return 0;
}



long int Factorial(un
signed int num)
{
	if(num >= 1)
		return num *Factorial(num-1);
	else
		return 1;
}
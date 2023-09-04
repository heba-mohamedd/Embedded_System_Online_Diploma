#include <stdio.h>
#include <string.h>
/*int CalCulate(int num ,int power)
{
	if(power != 0)
		return num*CalCulate(num , power-1);
	else return 1;

}*/
int main()
{
	auto int x(int y , int z);
	
	printf("%d",x(10,20));
	
	int x(int y , int z)
	{
		return y+z;
	}
	

	
	/*int num,power;
	printf("Enter base number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	
	printf("Enter power number(positive integer) : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&power);
	
	printf("%d ^ %d = %d",num , power,CalCulate(num , power));*/
	return 0;
}

#include <stdio.h>
#include <string.h>


void Reverse(char str[],int size)
{
	char temp;
	
	if(size > 0)
	{
		printf("%c",str[size-1]);
		size--;
		Reverse(str,size);
	}
	
} 

int main()
{
	char str[50];
	
	printf("Enter a sentence : ");
	fflush(stdout);fflush(stdin);
	gets(str);
	int s = strlen(str);
	Reverse(str , s);
	
}
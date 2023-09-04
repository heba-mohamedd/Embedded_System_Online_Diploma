#include <stdio.h>
#include <math.h>
#include <string.h>

void Prime_numbers(int n1 , int n2)
{
	int flag;
	int j ,i;
	if(n1 == 1) n1++;
	for(i = n1 ; i <= n2 ; i++)
	{
		flag =0;
		for(j = 2 ; j < i ;j++)
		{
			if(i % j ==0) 
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0) printf("%d  ",i);
	}
}
/**********************************************************/

int  revers_digits(int num)
{
	int n = 0;
	
	while(num != 0)
	{
		n =(n*10)+(num%10);
		num  = num /10;
	}
	return n;
}

/**********************************************************/

int Count_binary(int num)
{
	int k =0;
	int count = 0;
	while (num != 0)
	{
		
		k = (num&1);
		num = num>>1;
		if(k) count++;
		else continue;
	}
	return count;
}

/**********************************************************/

void Unique_number(int a[],int size)
{
	int i , j ;
	for(i = 0 ; i < size ; i++)
	{
		for(j = 0 ; j< size ; j++)
		{
			if(a[i] == a[j] && i != j) break;	
		}
		if(j == size) printf("%d is nuique number \n",a[i]);
	}
}

/**********************************************************/

int SUM(int n)
{
	int i = 1;
	if(n == 1) return 1;
	else
	{
		return n+SUM(n-1);
	}
}
void revers_array(int a[] , int s)
{
	int temp;
	for(int i = 0 ; i< s/2 ; i++)
	{
		temp = a[i];
		a[i] = a[s-1-i];
		a[s-1-i] = temp; 
	}
}

/**********************************************************/

int count_max_ones(int n)
{
	int t;
	int i = 0;
	int max = 0;
	int count = 0;
	while (i<=31)
	{
		t = n&1;
		if(t) count++;
		else 
		{
			if(max < count) 
			{
				max = count ;
				count =0;
			}
		}
		n = n>>1;
		i++;
	}
	return max;
}

/**********************************************************/

void reverse_string(char str[],int start , int end)
{
	while(start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		
		start++;
		end--;
	}
}

/**********************************************************/

void reverse_words(char str[])
{
	int len = strlen(str);
	int start = 0;
	int end = len-1;
	reverse_string(str , start ,end);
	//heba mohamed
	start = 0;
	end = 0;
	while(end < len)
	{
		if(str[end] == ' ' || str[end] == '.')
		{
			reverse_string(str ,start , end );
			start = end +1;
		}
		end ++;
	}
	//strcat(str ," ");
	reverse_string(str , start ,end-1);
}

/**********************************************************/

int sum_digits(int num)
{
	static int sum =0;
	int ram ;
	if(num != 0)
	{
		ram = num %10;
		sum +=ram;
		num/=10;
		sum_digits(num);
	}
	else return 0; 
	return sum;
}


/**********************************************************/

float square_root(int num)
{
	float result ;
	result = sqrt(num);
	
	return result;
}
#include<stdio.h>
int square(int a);
void main()
{
	int a,b;
	printf("Enter a Number:");
	scanf("%d",&a);
	b = square(a);
	printf("Sum of square digits : %d",b);
}
int sum = 0;
int square(int a)
{
	int y,x;
	if(a>0)
	{
		x = a%10;
		y = x * x;
		a = a/10;
		sum = y + square (a);
	}
	else
	{
		return sum;
	}
}

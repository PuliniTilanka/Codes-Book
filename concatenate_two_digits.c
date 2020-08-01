#include<stdio.h>
#define number1(x,y) (x*10+y)
#define number2(y,x) (y*10+x)
void main()
{
	int x,y,number1,number2;
	printf("Enter 1st number:");
	scanf("%d",&x);
	printf("Enter 2nd Number:");
	scanf("%d",&y);
	printf("%d\n",number1(x,y));
	printf("%d",number2(y,x)); 
}

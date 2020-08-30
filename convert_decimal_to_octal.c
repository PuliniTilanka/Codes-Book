#include<stdio.h>
int main()
{
	int n,i=1,x=0;
	printf("Enter a decimal number : ");
	scanf("%d",&n);
	int arr[i];
	while(n!=0)
	{
			arr[i]= n%8;
			x++;
			n=n/8;
			i++;
		
	}
	while(x>0)
	{
		printf("%d",arr[x]); 
		x--;
	}
	

}

#include<stdio.h>
int hcf(int min, int count,int value);
void main()
{

	int i,count=0,a,n;
	printf("How many numbers you wish to enter :");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
		printf("Enter No %d :", (i+1));
		scanf("%d",&x[i]);
	}
	int	min=x[0];
	for(i=0;i<n;i++)
	{
		if(x[i]>x[i+1])
		{
			min=x[i+1];
		}
	}
	count =n;
	while(min>0)
	{
		for(i=0;i<n;i++)
		{
			int value = x[i];
			count=hcf(min,count,value);	
		}
		if(count==0)
		{
			printf("Highest Common Factor is %d",min);
			return 0;
		}
		else
		{
			count = n;
			min=min-1;
		}
		
	}
	
	
}
int hcf(int min, int count,int value)
{
	if(value%min==0)
	{
		count = count-1;
		return count;
	}
	else
	{
		return count;
	}
}

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
	while(min>0)
	{
		for(i=0;i<n;i++)
		{
			if(x[i]%min==0)
			{
				count++;
			}
		
		}
		if(count==n)
		{
			printf("The Highest Common Factor is %d",min);
			break;
		}
		else
		{
			count =0 ;
			min--;
		}
		
	}
	
	
	
}


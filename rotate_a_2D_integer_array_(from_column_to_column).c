#include<stdio.h>
void displayArray(int arr[][3]);
int main()
{
	int i,j,temp;
	int arr[4][3];
	printf("Enter 4 numbers what you want : \n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<4;i++)
		{
			if(j==0)
			{
				printf("Enter number %d - ",i+1);
				scanf("%d",&arr[i][j]);
				
			}
			else
			{
				arr[i][j]=0;
			}
		}
	}
	printf("Before rotating\n");
	displayArray(arr);
	printf("After rotating\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<1;j++)
		{
			temp = arr[i][j];
			arr[i][j]= arr[i][j+1];
			arr[i][j+1]=temp;
		}
	}
	displayArray(arr);
}

void displayArray(int arr[][3])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
			printf("\n");
	}

}

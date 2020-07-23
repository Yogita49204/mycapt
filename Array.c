#include<stdio.h>
int main()
{
	int arr[3][3],i,j,sum;
	printf("input elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element=[%d],[%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("the matrix is:\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{printf("%d\t",arr[i][j]);
		}
		}
		printf("\n\n");
	for(i=0;i<3;i++)
	{
		sum=sum+arr[i][i];
	}

		printf("the addition of diagonal elements of the array is %d",sum);
}
		


	
	

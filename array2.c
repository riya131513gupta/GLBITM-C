#include<stdio.h>
int main()
{
	int arr[2][3];
	int i,j,sum =0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("entert the value of array");
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("twodimensional array elemment:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arr[i][j]);
			if(j==2)
			{
				printf("\n");
			}
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum =sum+arr[i][j];
	}
}
printf(" sum of nall elements :%d",sum );
  return 0;
}

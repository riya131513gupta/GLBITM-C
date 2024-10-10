#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i = 1;i<=4;i++)
	{
		  for(j = 1;j<=i;j++)
		  {
		  	 printf("*");
		  }
		  printf("\n");
	}
	for(k=3;k>=1;k--)
	{
		  for(l=k;l>=1;l--)
		  {
		  	printf("*");
		  }
		  printf("\n");
	}
	return 0;
}

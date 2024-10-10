#include<stdio.h>
int main()
{
	int i,j,k,l,n,m,o,p,q;
	printf("emnter the value of n..");
	scanf("%d", &n);
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  	   printf("*");	
	}
	for(k=1;k<=2*(n-i);k++)
	{
		printf(" ");
	}
	for(l=1;l<=i;l++)
	{
		printf("*");
	}
	printf("\n");
  }
  
  for(m=n;m>=1;m--)
  {
  	for(o=1;o<=m;o++)
  	{
  		printf("*");
	}
	for(p=1;p<=2*(4-m);p++)
	{
		printf(" ");
	}
	for(q=1;q<=m;q++)
	{
		printf("*");
	}
	printf("\n");
  }
  return 0;
}

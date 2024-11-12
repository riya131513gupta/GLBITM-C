#include<stdio.h>
int powerof(int);
int main()
{
	int n ,po;
	printf("enter the power");
	scanf("%d",&n);
	po= powerof(n);
	printf("value is: %d" , po);
	return 0;
}

int powerof(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return 2*powerof(n-1);
	}
}

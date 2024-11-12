#include<stdio.h>
void table(int,int);
int main()
{
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	table(n,1);
	return 0;
}

void table(int n,int i)
{
	printf("%d * %d = %d\n",n,i,n*i);
	if(i<10)
	  return table(n,i+1);
}

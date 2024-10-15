#include<stdio.h>
int main()
{
	int num, rem , n=0;
	printf("enter the number:");
	scanf("%d", &num);
	do
	{
		rem = num%10;
		if(n<=rem)
		{
	       n=rem;
	    }
		num=num/10;
	}while(num>0);	
	printf("largest value is %d" , n);
	return 0;
	
}

#include<stdio.h>
int main()
{
  int n=3;
  int m=4;
  int sum = m;
  int i;
  for(i=1;i<=n;i++)
  {
  	 printf("%d" ,sum);
  	 printf("+");
  	 sum = sum*10 +m;
  	 
  }
  return 0;
}

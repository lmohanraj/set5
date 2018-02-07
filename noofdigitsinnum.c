#include<stdio.h>
int main()
{
	int n,count;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("no of digits is %d",count);
	return 0;
}

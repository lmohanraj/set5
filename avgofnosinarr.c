#include<stdio.h>
int main()
{
	int n,a=0,arr[100],i,avg;
	printf("enter the number of elements \n");
	scanf("%d",&n);
	printf("enter the elements one by one");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		a=a+arr[i];
	}
	avg=a/n;
	printf("the average is %d",avg);
	return 0;
}

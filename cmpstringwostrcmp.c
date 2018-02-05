#include<stdio.h>
  #include<string.h>
  int main()
  {
  	int i,l1,l2,count=0;
  	char s1[100],s2[100];
  	printf("enter first string\n");
  	gets(s1);
  	printf("enter second string\n");
  	gets(s2);
  	l1=strlen(s1);
  	l2=strlen(s2);
  	if(l1==l2)
  	{
  	for(i=0;i<100;i++)
  	{
  		if(s1[i]!=s2[i])
  		count++;
  	}
  	if(count!=0)
  	printf("%s",s1);
  	}
  	else if(l1>l2)
  	printf("%s",s1);
  	else
  	printf("%s",s2);
  	return 0;
  }

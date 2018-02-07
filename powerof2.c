#include <stdio.h>
int main()
{
    int n;
    int t,count;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    t=n;
    count=0;
    while(t!=1)
    {
        if(t%2!=0)
        {
            count=1;
            break;
        }
        t=t/2;
    }
  
    if(count==0)
        printf("yes");
    else
        printf("no");
      
    return 0;
}

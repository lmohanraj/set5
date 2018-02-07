#include <stdio.h>
int main()
{
    int array[100];
    int i,j,n,t;
    printf("Enter the number of values \n");
    scanf("%d", &n);
    printf("Enter the elements one by one \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (array[j] > array[j + 1])
            {
                t = array[j];
                array[j] = array[j + 1];
                array[j + 1] = t;
            }
        }
    }
    printf("the smallest number is %d",array[0]);
    printf("\n the largest number is %d",array[n-1]);
    return 0;
}

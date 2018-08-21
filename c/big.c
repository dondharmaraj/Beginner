#include<stdio.h>
void main()
{
    int limit,arr[20],i,max;
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<limit;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("%d",max);
}

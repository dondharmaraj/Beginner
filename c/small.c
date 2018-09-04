#include<stdio.h>
void main()
{
    int limit,arr[20],i,min;
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<limit;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    printf("%d",min);
}

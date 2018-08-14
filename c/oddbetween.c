#include<stdio.h>
void main()
{
    int N,Q,i,rem;
    scanf("%d",&N);
    scanf("%d",&Q);
    if(N<=100000&&Q<=100000)
    {
    for (i=N+1;i<Q;i++)
        {
            rem=i%2;
            if(rem!=0)
                printf("%d ",i);
        }
    }
}

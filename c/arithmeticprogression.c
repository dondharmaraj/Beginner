#include<stdio.h>
void main()
{
        int Z=0,N,A,D,i;
        scanf("%d",&N);
        scanf("%d",&A);
        scanf("%d",&D);
        if((N>=1&&N<=100000)&&(A>=1&&A<=100000)&&(D>=1&&D<=100000))
        {
            for(i=0;i<N;i++)
            {
                Z=Z+A+D;
            }
            printf("%d",Z);
        }
}

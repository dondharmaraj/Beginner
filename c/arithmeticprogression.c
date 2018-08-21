#include<stdio.h>
void main()
{
        int Z=0,N,A,D,i,sum,arr[20];
        scanf("%d",&N);
        scanf("%d",&A);
        scanf("%d",&D);
        if((N>=1&&N<=100000)&&(A>=1&&A<=100000)&&(D>=1&&D<=100000))
        {
            arr[0]=A;
            Z=A+D;
            for(i=1;i<N;i++)
            {
                arr[i]=Z;
                Z=Z+D;
            }
            sum=arr[0]+arr[1];
            for(i=2;i<N;i++)
            {
                sum=sum+arr[i];
            }
            printf("%d",sum);
        }
}

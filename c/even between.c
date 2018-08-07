#include<stdio.h> 
int main()
{
int s1,s2,rem,i;
scanf("%d",&s1);
scanf("%d",&s2);
    for(i=s1; i<=s2; i++)
    {
        rem = i % 2;
        if(rem == 0)
    
        printf("\n  %d",i);
    
    }

return 0; 
} 



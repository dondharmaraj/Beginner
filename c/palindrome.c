#include <stdio.h>
int main()
{
    int n, ri = 0, remainder, oi;

    scanf("%d", &n);

    oi = n;

    while( n!=0 )
    {
        remainder = n%10;
        ri = ri*10 + remainder;
        n /= 10;
    }

    if (oi == ri)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}

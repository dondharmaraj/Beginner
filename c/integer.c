#include <stdio.h>
int main()
{
    long long n;
    int s = 0;

    scanf("%lld", &n);

    while(n != 0)
    {
        n /= 10;
        ++s;
    }

    printf("%d", s);
}

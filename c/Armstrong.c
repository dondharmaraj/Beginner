#include <stdio.h>
int main()
{
    int N, on, remainder, result = 0;

    scanf("%d", &N);
    if(N<=100000)
    {

    on = N;

    while (on != 0)
    {
        remainder = on%10;
        result += remainder*remainder*remainder;
        on /= 10;
    }

    if(result == N)
        printf("yes");
    else
        printf("no");
    }
    else
    {
    }

    return 0;
}

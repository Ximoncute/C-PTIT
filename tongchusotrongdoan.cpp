#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int sum = a;
        a = b;
        b = sum;
    }
    printf("%lld", (long long)(a + b) * (b - a + 1) / 2);
    return 0;
}

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%.15lf\n", (double)1/n);
    }
    return 0;
}

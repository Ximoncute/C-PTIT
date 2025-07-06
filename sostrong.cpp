#include <stdio.h>
#define ll long long

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return factorial(n - 1) * n;
}

int sol(int n) {
    int m = n;
    int sum = 0;
    while (n > 0) {
        sum += factorial(n % 10);
        n /= 10;
    }
    if (sum == m) return 1;
    return 0;
}

signed main() {
    int n;
    scanf("%d", &n);
    printf("%d", sol(n));
}

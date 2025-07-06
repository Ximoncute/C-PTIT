#include <iostream>
#include <tuple>


std::tuple<int, int, int> extended_gcd(int a, int b) {
    if (b == 0) return {a, 1, 0};
    int g, x1, y1;
    std::tie(g, x1, y1) = extended_gcd(b, a % b);
    int x = y1;
    int y = x1 - (a / b) * y1;
    return {g, x, y};
}

int modular_inverse(int a, int m) {
    int g, x, y;
    std::tie(g, x, y) = extended_gcd(a, m);
    if (g != 1) return -1; 
    return (x % m + m) % m; 
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int T;
    std::cin >> T;
    
    while (T--) {
        int a, m;
        std::cin >> a >> m;
        std::cout << modular_inverse(a, m) << '\n';
    }
    
    return 0;
}


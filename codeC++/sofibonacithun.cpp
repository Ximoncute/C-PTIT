#include <iostream>
#include <vector>

const int MAX_N = 92; 


std::vector<unsigned long long> calculate_fibonacci_up_to(int max_n) {
    std::vector<unsigned long long> fib(max_n + 1);
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= max_n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int T;
    std::cin >> T;
    

    std::vector<unsigned long long> fib = calculate_fibonacci_up_to(MAX_N);
    
    while (T--) {
        int n;
        std::cin >> n;
        std::cout << fib[n] << '\n';
    }
    
    return 0;
}


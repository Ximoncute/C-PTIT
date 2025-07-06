#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  

    long long total_sum = 0;
    long long current_term = 1;

    for (int i = 1; i <= N; ++i) {
        current_term *= i;  
        total_sum += current_term;  
    }

    cout << total_sum << endl;  
    return 0;
}


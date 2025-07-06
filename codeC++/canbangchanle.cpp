#include <iostream>
using namespace std;

bool isBalanced(int num, int N) {
    int even = 0, odd = 0;
    while (N--) {
        int digit = num % 10;
        (digit % 2 == 0) ? ++even : ++odd;
        num /= 10;
    }
    return even == odd;
}

int main() {
    int N;
    cin >> N;
    int start = 1, end = 1;
    for (int i = 1; i < N; ++i) start *= 10;
    end = start * 10;

    int count = 0;
    for (int num = start; num < end; ++num) {
        if (isBalanced(num, N)) {
            cout << num << " ";
            if (++count % 10 == 0) cout << endl;
        }
    }
    return 0;
}


#include <iostream>
using namespace std;

int finalDigit(int n) {
    if (n == 0) return 0;
    return (n - 1) % 9 + 1;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        cout << finalDigit(N) << endl;
    }

    return 0;
}


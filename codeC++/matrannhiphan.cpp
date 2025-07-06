#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int count = 0;
    
    for (int i = 0; i < N; ++i) {
        int num1s = 0;
        for (int j = 0; j < 3; ++j) {
            int value;
            cin >> value;
            if (value == 1) {
                ++num1s;
            }
        }

        if (num1s > 3 - num1s) {
            ++count;
        }
    }
    
    cout << count << endl;
    
    return 0;
}


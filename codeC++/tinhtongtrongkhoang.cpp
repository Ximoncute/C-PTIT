#include <iostream>
#include <vector>

using namespace std;

void processTestCase() {
    int n, Q;
    cin >> n >> Q;
    
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    vector<int> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + A[i];
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;

        cout << (prefix_sum[R] - prefix_sum[L - 1]) << endl;
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        processTestCase();
    }
    
    return 0;
}


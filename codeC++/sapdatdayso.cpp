#include <iostream>
#include <vector>

using namespace std;

void processArray(vector<long long>& A) {
    int n = A.size();
    vector<long long> result(n, -1);

    for (int i = 0; i < n; ++i) {
        if (A[i] >= 0 && A[i] < n && result[A[i]] == -1) {
            result[A[i]] = A[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i != 0) cout << " ";
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        processArray(A);
    }

    return 0;
}


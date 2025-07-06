#include <iostream>
#include <vector>

using namespace std;

void rearrangeArray(vector<long long>& A) {
    int n = A.size();
    int index = 0;

    for (int i = 0; i < n; ++i) {
        if (A[i] != 0) {
            A[index++] = A[i];
        }
    }

    while (index < n) {
        A[index++] = 0;
    }

    for (int i = 0; i < n; ++i) {
        if (i != 0) cout << " ";
        cout << A[i];
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

        rearrangeArray(A);
    }

    return 0;
}


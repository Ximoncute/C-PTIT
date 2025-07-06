#include <iostream>
#include <vector>
using namespace std;


void sap_xep_0_1_2(vector<int>& A) {
    int low = 0, mid = 0, high = A.size() - 1;

    while (mid <= high) {
        if (A[mid] == 0) {
            swap(A[low], A[mid]);
            low++;
            mid++;
        } else if (A[mid] == 1) {
            mid++;
        } else { 
            swap(A[mid], A[high]);
            high--;
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> A(n);

        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        sap_xep_0_1_2(A);

        for (int i = 0; i < n; ++i) {
            if (i > 0) cout << " ";
            cout << A[i];
        }
        cout << endl;
    }

    return 0;
}


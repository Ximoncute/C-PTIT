#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;

    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    vector<vector<int>> B(m, vector<int>(p));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> B[i][j];
        }
    }

    vector<vector<int>> C(n, vector<int>(p, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < m; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            if (j > 0) cout << " ";
            cout << C[i][j];
        }
        cout << endl;
    }
    
    return 0;
}


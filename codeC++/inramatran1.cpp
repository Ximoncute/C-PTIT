#include <iostream>
#include <vector>
using namespace std;

void printSnakePattern(const vector<vector<int>>& matrix, int N) {
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
  
            for (int j = 0; j < N; ++j) {
                cout << matrix[i][j] << " ";
            }
        } else {
  
            for (int j = N - 1; j >= 0; --j) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
}

void processTestCase() {
    int N;
    cin >> N;
    
    vector<vector<int>> matrix(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    printSnakePattern(matrix, N);
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        processTestCase();
    }
    
    return 0;
}


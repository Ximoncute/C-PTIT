#include <iostream>
#include <vector>

using namespace std;


void generateCombinations(int N, int K, int start, vector<int>& combination) {
    if (combination.size() == K) {

        for (int i = 0; i < K; ++i) {
            cout << combination[i];
        }
        cout << " ";
        return;
    }
    
    for (int i = start; i <= N; ++i) {
        combination.push_back(i);
        generateCombinations(N, K, i + 1, combination);
        combination.pop_back();
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> combination;
        generateCombinations(N, K, 1, combination);
        cout << endl;
    }
    
    return 0;
}


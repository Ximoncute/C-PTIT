#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countPairsWithSum(const vector<int>& A, int k) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int num : A) {
        freq[num]++;
    }

    for (int num : A) {
        int complement = k - num;
   
        if (freq.find(complement) != freq.end()) {
            count += freq[complement];

            if (complement == num) {
                count--;
            }
        }
    }

    return count / 2;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        
        cout << countPairsWithSum(A, k) << endl;
    }
    
    return 0;
}


#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

vector<int> lay_chu_so_unique(const vector<long long>& A) {
    set<char> digits_set;

    for (long long num : A) {
        string num_str = to_string(num);
        for (char ch : num_str) {
            digits_set.insert(ch);
        }
    }


    vector<int> digits;
    for (char ch : digits_set) {
        digits.push_back(ch - '0'); 
    }
    
    sort(digits.begin(), digits.end());
    return digits;
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

        vector<int> result = lay_chu_so_unique(A);

        for (size_t i = 0; i < result.size(); ++i) {
            if (i > 0) cout << " ";
            cout << result[i];
        }
        cout << endl;
    }

    return 0;
}


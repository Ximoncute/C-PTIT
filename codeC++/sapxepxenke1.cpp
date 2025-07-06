#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sap_xep_khuon_dang(const vector<int>& A) {
    vector<int> sorted_A = A;
    sort(sorted_A.begin(), sorted_A.end()); 
    
    vector<int> result;
    int left = 0;
    int right = sorted_A.size() - 1;
    
    while (left <= right) {
        if (left <= right) {
            result.push_back(sorted_A[right--]); 
        }
        if (left <= right) {
            result.push_back(sorted_A[left++]); 
        }
    }
    
    return result;
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
        
        vector<int> result = sap_xep_khuon_dang(A);
        
        for (size_t i = 0; i < result.size(); ++i) {
            if (i > 0) cout << " ";
            cout << result[i];
        }
        cout << endl;
    }
    
    return 0;
}


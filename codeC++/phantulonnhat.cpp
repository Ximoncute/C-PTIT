#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int n;  
        cin >> n;
        
        vector<int> A(n);
        int maxElement = 0;  
        
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
            if (A[i] > maxElement) {
                maxElement = A[i];  
            }
        }
        
        cout << maxElement << endl;  
    }
    
    return 0;
}


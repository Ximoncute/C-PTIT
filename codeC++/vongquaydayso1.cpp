#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void rotateArray(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n;  
    vector<int> temp(arr.begin(), arr.begin() + d);
    for (int i = 0; i < n - d; ++i) {
        arr[i] = arr[i + d];
    }
    for (int i = 0; i < d; ++i) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    
    while (T--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        rotateArray(arr, d);
        
        for (int i = 0; i < n; ++i) {
            if (i > 0) cout << " ";
            cout << arr[i];
        }
        cout << endl;
    }
    
    return 0;
}


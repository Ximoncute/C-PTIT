#include <iostream>
using namespace std;


bool isLocPhat(string num) {
    for (char digit : num) {
        if (digit != '0' && digit != '6' && digit != '8') {
            return false;  
        }
    }
    return true;  
}

int main() {
    int t;
    cin >> t;  
    
    while (t--) {
        string num;
        cin >> num; 
        
        if (isLocPhat(num)) {
            cout << "YES" << endl;  
        } else {
            cout << "NO" << endl;  
        }
    }

    return 0;
}


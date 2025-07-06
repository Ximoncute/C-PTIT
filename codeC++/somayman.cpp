#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();  
    
    while (T--) {
        string num;
        getline(cin, num);
        if (num.size() >= 2 && num.substr(num.size() - 2) == "86") {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    
    return 0;
}


#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    
    while (T--) {
        string S;
        getline(cin, S);
        
        unordered_map<char, int> count;
        

        for (char c : S) {
            count[c]++;
        }
        

        for (char c : S) {
            if (count[c] == 1) {
                cout << c;
            }
        }
        cout << endl;
    }
    
    return 0;
}


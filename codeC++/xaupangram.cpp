#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

bool canBePangram(const string& S, int K) {

    unordered_set<char> uniqueChars;

    for (char c : S) {
        if (c >= 'a' && c <= 'z') {
            uniqueChars.insert(c);
        }
    }

    int missingCount = 26 - uniqueChars.size();

    return missingCount <= K;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    
    while (T--) {
        string S;
        getline(cin, S);
        int K;
        cin >> K;
        cin.ignore(); 
        
        if (canBePangram(S, K)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}


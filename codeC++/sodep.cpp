#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

bool containsOnlyEvenDigits(const string& s) {
    for (char c : s) {
        if (c != '0' && c != '2' && c != '4' && c != '6' && c != '8') {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    while (T--) {
        string n;
        getline(cin, n);
        
        if (isPalindrome(n) && containsOnlyEvenDigits(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}


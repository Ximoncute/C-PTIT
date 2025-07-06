#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string largestPalindrome(string s) {
    unordered_map<char, int> count;

    for (char c : s) {
        count[c]++;
    }

    string unique_digits;
    for (auto& entry : count) {
        unique_digits.push_back(entry.first);
    }
    sort(unique_digits.rbegin(), unique_digits.rend());
   string result;
    for (char digit : unique_digits) {
        result += string(count[digit], digit);
    }
    
    return result;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--) {
        string s;
        getline(cin, s);
        cout << largestPalindrome(s) << endl;
    }
    
    return 0;
}


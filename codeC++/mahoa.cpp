#include <iostream>
#include <string>
using namespace std;

string ma_hoa(const string& s) {
    string result;
    int n = s.length();

    for (int i = 0; i < n; ) {
        char current_char = s[i];
        int count = 0;

        while (i < n && s[i] == current_char) {
            count++;
            i++;
        }

        result += current_char;
        result += to_string(count);
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
        cout << ma_hoa(s) << endl;
    }

    return 0;
}


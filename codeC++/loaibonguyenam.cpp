#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string loai_bo_nguyen_am(const string& s) {
    string result;
    string nguyen_am = "aeiouyAEIOUY";

    for (char c : s) {
        if (nguyen_am.find(c) == string::npos) {
            result += '.';
            result += tolower(c); 
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s; 

    cout << loai_bo_nguyen_am(s) << endl; 

    return 0;
}


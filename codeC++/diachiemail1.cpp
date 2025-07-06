#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

string toLower(string s) {
    for (char &c : s) {
        c = tolower(c);
    }
    return s;
}

int main() {
    string fullName;
    getline(cin, fullName);

    stringstream ss(fullName);
    vector<string> words;
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }

    string name = words.back();
    words.pop_back(); 

    string initials = "";
    for (string part : words) {
        initials += tolower(part[0]);
    }

    string email = toLower(name) + "." + initials + "@ptit.edu.vn";

    cout << email << endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

string removeWord(const string& str, const string& wordToRemove) {
    string result = str;
    size_t pos = 0;

    while ((pos = result.find(wordToRemove, pos)) != string::npos) {
        result.erase(pos, wordToRemove.length());

        if (pos < result.length() && result[pos] == ' ') {
            result.erase(pos, 1);
        }
    }
    
    return result;
}

int main() {
    string initialString;

    getline(cin, initialString);

    getline(cin, wordToRemove);
    

    string result = removeWord(initialString, wordToRemove);
    

    cout << result << endl;
    
    return 0;
}


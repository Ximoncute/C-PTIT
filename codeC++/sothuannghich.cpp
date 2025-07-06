#include <iostream>
#include <algorithm>  
using namespace std;


bool isPalindrome(string num) {
    string reversed_num = num;  
    reverse(reversed_num.begin(), reversed_num.end());  
    return num == reversed_num;  
}

int main() {
    int t;
    cin >> t;  
    
    while (t--) {
        string num;
        cin >> num; 
        
        if (isPalindrome(num)) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }

    return 0;
}


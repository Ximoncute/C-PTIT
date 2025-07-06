#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    
    set<string> uniqueWishes;
    
    for (int i = 0; i < n; ++i) {
        string wish;
        getline(cin, wish);
        uniqueWishes.insert(wish); 
    }

    cout << uniqueWishes.size() << endl;
    
    return 0;
}


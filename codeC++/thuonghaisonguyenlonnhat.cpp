#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    
    while (T--) {
        string X, Y;
        getline(cin, X);
        getline(cin, Y);
        
        try {
     
            cpp_int x = cpp_int(X);
            cpp_int y = cpp_int(Y);
            

            if (y == 0) {
                cout << "undefined" << endl;
                continue;
            }
            

            cpp_int result = x / y;
            cout << result << endl;
        } catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    }
    
    return 0;
}


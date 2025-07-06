#include <iostream>
#include <algorithm>  
#include <string>
using namespace std;


long long gcd(long long x, long long y) {
    return __gcd(x, y);  
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long a, x, y;
        cin >> a >> x >> y;   
        long long d = gcd(x, y); 
        string result = "";
        for (long long i = 0; i < d; ++i) {
            result += to_string(a);
        }
        
        cout << result << endl;
    }
    
    return 0;
}


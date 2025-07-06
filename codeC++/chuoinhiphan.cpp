#include <iostream>
using namespace std;

bool kiemtrachuoi(string s) {
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == '0' && s[i + 1] == '0') {
            return false; 
        }
    }
    return true; 
}
void sinhchuoi(int n, string chuoihientai) {
    if (chuoihientai.length() == n) { 
        if (kiemtrachuoi(chuoihientai)) { 
            cout << chuoihientai << endl; 
        }
        return;
    }
    sinhchuoi(n, chuoihientai + "0");
    sinhchuoi(n, chuoihientai + "1");
}
int main() {
    int N;
    cout << "Nhap N: ";
    cin >> N;   
    if (N <= 0) {
        cout << "Re-enter N > 0" << endl;
        return 0;
    }
    cout << "Cac chuoi thoa man la:" << endl;
    sinhchuoi(N, ""); 

    return 0;
}


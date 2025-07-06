#include <iostream>
using namespace std;

void timDuongDi(int n, int m, string duongDi, int hang, int cot, int &soDuongDi) {
    if (hang == n && cot == m) {
        cout << duongDi << endl;  
        soDuongDi++;  
        return;
    }
    if (cot < m) {
        timDuongDi(n, m, duongDi + "R", hang, cot + 1, soDuongDi); 
    }

    if (hang < n) {
        timDuongDi(n, m, duongDi + "U", hang + 1, cot, soDuongDi);  
    }
}

int main() {
    int n, m;
    cout << "Nhap so hang (n): ";
    cin >> n;
    cout << "Nhap so cot (m): ";
    cin >> m;

    int soDuongDi = 0;  
    cout << "Cac duong di tu goc duoi trai den goc tren phai la:\n";
    timDuongDi(n, m, "", 0, 0, soDuongDi);  
    cout << "Tong so duong di: " << soDuongDi << endl;

    return 0;
}


#include <iostream>
#include <iomanip> 
using namespace std;


struct ThiSinh {
    string hoTen;
    string ngaySinh;
    float diem1;
    float diem2;
    float diem3;
    float tongDiem;
};


void nhapThongTin(ThiSinh &ts) {
    getline(cin, ts.hoTen);      
    getline(cin, ts.ngaySinh);   
    cin >> ts.diem1 >> ts.diem2 >> ts.diem3;  
    ts.tongDiem = ts.diem1 + ts.diem2 + ts.diem3;  
}


void xuatThongTin(const ThiSinh &ts) {
    cout << ts.hoTen << " " << ts.ngaySinh << " ";
    cout << fixed << setprecision(1) << ts.tongDiem << endl;  
}

int main() {
    ThiSinh ts;
    nhapThongTin(ts);
    xuatThongTin(ts);
    
    return 0;
}


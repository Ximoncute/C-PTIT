#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <sstream>
using namespace std;


string chuan_hoa_tu(string tu) {
    transform(tu.begin(), tu.end(), tu.begin(), ::tolower);
    tu[0] = toupper(tu[0]); 
    return tu;
}

int main() {
    string ho_ten;
    getline(cin, ho_ten); 

    stringstream ss(ho_ten);
    string tu;
    string ho, ten_dem, ten;

    vector<string> tu_da_tach;
    while (ss >> tu) {
        tu_da_tach.push_back(tu);
    }

    ten = tu_da_tach.back();
    transform(ten.begin(), ten.end(), ten.begin(), ::toupper); 

    for (int i = 0; i < tu_da_tach.size() - 1; ++i) {
        if (i == 0) {
            ho = chuan_hoa_tu(tu_da_tach[i]); // H?
        } else {
            ten_dem += chuan_hoa_tu(tu_da_tach[i]) + " "; 
        }
    }

    if (!ten_dem.empty() && ten_dem.back() == ' ') {
        ten_dem.pop_back();
    }

    cout << ho << " " << ten_dem << ", " << ten << endl;

    return 0;
}


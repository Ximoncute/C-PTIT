#include <iostream>
#include <vector>
#include <string>

using namespace std;


string findSmallest(int m, int s) {
    if (s == 0) {
        if (m == 1) return "0";
        else return "-1";
    }
    if (s > 9 * m) return "-1";

    vector<int> digits(m, 0);

    s--; 
    for (int i = m - 1; i >= 0; --i) {
        if (s >= 9) {
            digits[i] = 9;
            s -= 9;
        } else {
            digits[i] = s;
            s = 0;
        }
    }
    digits[0] += 1; 
    for (int i = 1; i < m; ++i) {
        if (digits[i] > 0) {
            digits[i]--;
            break;
        }
    }

    string smallest = "";
    for (int i = 0; i < m; ++i) {
        smallest += (digits[i] + '0');
    }
    return smallest;
}

string findLargest(int m, int s) {
    if (s == 0) {
        if (m == 1) return "0";
        else return "-1";
    }
    if (s > 9 * m) return "-1";

    vector<int> digits(m, 0);
    for (int i = 0; i < m; ++i) {
        if (s >= 9) {
            digits[i] = 9;
            s -= 9;
        } else {
            digits[i] = s;
            s = 0;
        }
    }

    string largest = "";
    for (int i = 0; i < m; ++i) {
        largest += (digits[i] + '0');
    }
    return largest;
}

int main() {
    int m, s;
    cin >> m >> s;

    string smallest = findSmallest(m, s);
    string largest = findLargest(m, s);

    cout << smallest << " " << largest << endl;

    return 0;
}


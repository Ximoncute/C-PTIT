#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

const int MOD = 10007;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


int calculateLCMTotal(vector<int>& nums) {
    int n = nums.size();
    int totalLCM = 0;
    int subsets = 1 << n; // 2^n
    
    for (int i = 1; i < subsets; ++i) 
        int currentLCM = 1;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) { 
                currentLCM = lcm(currentLCM, nums[j]);
            }
        }
        totalLCM = (totalLCM + currentLCM) % MOD;
    }
    
    return totalLCM;
}

int main() {
    int T;
    cin >> T;

    for (int caseNumber = 1; caseNumber <= T; ++caseNumber) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        int result = calculateLCMTotal(nums);
        cout << "Case " << caseNumber << ": " << result << endl;
    }

    return 0;
}


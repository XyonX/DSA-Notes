// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// I think this is a more optimized version for the leetcode 
// Not implemented by me
// Just for future ref and it uses probably math based formula
class Solution {
public:
    static constexpr int MOD = 1e9 + 7;

    long long power(long long base, long long exponent) {
        long long result = 1;
        while (exponent > 0) {
            if (exponent % 2 == 1)
                result = (result * base) % MOD;
            base = (base * base) % MOD;
            exponent /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2; // indexes 0, 2, 4...
        long long oddPositions = n / 2;        // indexes 1, 3, 5...

        long long total = (power(5, evenPositions) * power(4, oddPositions)) % MOD;
        return static_cast<int>(total);
    }
};

int main() {
    Solution solution;
    cout << solution.countGoodNumbers(1) << endl;  // Should output 5
    cout << solution.countGoodNumbers(4) << endl;  // Should output 400
    cout << solution.countGoodNumbers(50) << endl; // Should output a large number modulo 1e9+7
    return 0;
}
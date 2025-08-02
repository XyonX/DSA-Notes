// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// SOME RECURSION BASED PROBLEM

// This is the version I implemented
// It has precision issues so won't be passing all test cases in leetcode
double pow(int i, int num, int exponent) {
    if (i >= exponent - 1) {
        return num;
    }
    return num * pow(i + 1, num, exponent);
}

// This is the fixed version
// I didn't write it 
// Written or fixed by AI that passed all test cases 
class Solution {
public:
    double pow(int i, double num, int exponent) {
        if (i >= exponent - 1) {
            return num;
        }
        return num * pow(i + 1, num, exponent);
    }

    double myPow(double x, int n) {
        if (n == 0) return 1;
        
        // Handle negative exponents
        bool isNegative = (n < 0);
        long long exp = abs((long long)n);

        double result = pow(0, x, exp);
        return isNegative ? 1.0 / result : result;
    }
};

int main() {
    Solution solution;
    cout << solution.myPow(2.0, 10) << endl;  // Should output 1024.0
    cout << solution.myPow(2.1, 3) << endl;   // Should output approximately 9.261
    cout << solution.myPow(2.0, -2) << endl;  // Should output 0.25
    return 0;
}
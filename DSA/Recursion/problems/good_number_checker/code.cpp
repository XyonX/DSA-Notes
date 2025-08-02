// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Basic is prime helper
bool isPrime(int number) {
    // Fixed the bug: checking divisibility by 'number' instead of 'i'
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {  // Fixed: was checking number % 2
            return false;
        }
    }
    return true;
}

// Good number rule is:
// Even index must have even digit
// Odd index must have prime digit

bool goodNumber(int i, int number, int n) {
    if (i >= n) {
        return true;
    }
    int d = number % 10;
    if (i % 2 == 0) {
        if (d % 2 == 0) {
            return goodNumber(i + 1, number / 10, n);
        } else {
            return false;
        }
    } else {
        if (isPrime(d)) {
            return goodNumber(i + 1, number / 10, n);
        } else {
            return false;
        }
    }
}

int main() {
    cout << goodNumber(0, 820, 3) << endl;  // Should check if 820 is a good number with 3 digits
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Recursive implementation of atoi function
// Converts a string to a 32-bit signed integer
int myAtoi(int i, string s, bool isNumStarted, int sign, int num) {
    // Base case: reached end of string
    if (i >= s.size()) {
        if (!isNumStarted) return 0; // No number found
        return num * sign;
    }
    
    // Skip leading spaces
    if (!isNumStarted && s[i] == ' ') {
        return myAtoi(i + 1, s, false, 1, num);
    }
    
    // Handle sign
    if (!isNumStarted && s[i] == '+') {
        return myAtoi(i + 1, s, true, 1, num);
    }
    
    if (!isNumStarted && s[i] == '-') {
        return myAtoi(i + 1, s, true, -1, num);
    }
    
    // Handle digits
    if (isdigit(s[i])) {
        int digit = s[i] - '0';
        // Check for overflow before multiplying
        if (num > (INT_MAX - digit) / 10) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        num = num * 10 + digit;
        return myAtoi(i + 1, s, true, sign, num);
    }
    
    // Non-digit character encountered after number started
    return num * sign;
}

int main() {
    cout << myAtoi(0, "    456abc", false, 1, 0) << endl;
    cout << myAtoi(0, "   -42", false, 1, 0) << endl;
    cout << myAtoi(0, "4193 with words", false, 1, 0) << endl;
    return 0;
}
// CONTAINER WITH MOST WATER - Correct Solution
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// CONTAINER WITH MOST WATER - Correct Implementation
int maxArea(vector<int>& height) {
    if(height.size()==0 || height.size()==1) return 0;
    int l = 0;
    int r = height.size() - 1;
    int maxArea = INT_MIN;
    while(l < r) {
        int area = min(height[l], height[r]) * (r - l);
        maxArea = max(area, maxArea);
        
        if(height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }
    return maxArea;
}

void runTests() {
    vector<pair<vector<int>, int>> tests = {
        {{1,8,6,2,5,4,8,3,7}, 49},       // Classic case
        {{1,1}, 1},                      // Minimal case
        {{4,3,2,1,4}, 16},               // Symmetric peaks
        {{1,2,1}, 2},                    // Narrow valley
        {{1,2,4,3}, 4},                  // Increasing then dip
        {{0,0,0,0}, 0},                  // All zero
        {{10000, 0, 10000}, 20000},      // Max height edge case
        {{1,2,3,4,5,6,7,8,9,10}, 25},    // Increasing sequence
        {{10,9,8,7,6,5,4,3,2,1}, 25},    // Decreasing sequence
        {{1}, 0},                        // Single element
        {{}, 0}                          // Empty input
    };

    for (int i = 0; i < tests.size(); ++i) {
        int result = maxArea(tests[i].first);
        if (result == tests[i].second) {
            cout << "Test " << i + 1 << " passed.
";
        } else {
            cout << "Test " << i + 1 << " failed. Expected " << tests[i].second << ", got " << result << ".
";
        }
    }
}

int main() {
    runTests();
    return 0;
}
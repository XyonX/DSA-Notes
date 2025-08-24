#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function to compute prefix maximum heights
    map<int, int> prefixMax(vector<int> height) {
        int maxHeight = 0;
        map<int, int> container;

        for (int i = 0; i < height.size(); i++) {
            container[i] = maxHeight;
            maxHeight = max(maxHeight, height[i]);
        }
        return container;
    }

    // Helper function to compute suffix maximum heights
    map<int, int> suffixMax(vector<int> height) {
        int maxHeight = 0;
        map<int, int> container;
        for (int i = height.size() - 1; i >= 0; i--) {
            container[i] = maxHeight;
            maxHeight = max(maxHeight, height[i]);
        }
        return container;
    }

    // Main function to calculate trapped rainwater
    int trap(vector<int>& height) {
        map<int, int> pMax = prefixMax(height);
        map<int, int> sMax = suffixMax(height);
        int totalWater = 0;
        for (int i = 0; i < height.size(); i++) {
            int water = min(pMax[i], sMax[i]) - height[i];
            if (water > 0)
                totalWater += water;
        }
        return totalWater;
    }
};

// Standard approach (includes current bar)
// For prefix max, at each position i, you store the maximum so far (including the current bar):
vector<int> standardPrefixMax(vector<int>& height) {
    int n = height.size();
    vector<int> leftMax(n);
    leftMax[0] = height[0];
    for (int i = 1; i < n; ++i)
        leftMax[i] = max(leftMax[i - 1], height[i]);
    return leftMax;
}

// For suffix max:
vector<int> standardSuffixMax(vector<int>& height) {
    int n = height.size();
    vector<int> rightMax(n);
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; --i)
        rightMax[i] = max(rightMax[i + 1], height[i]);
    return rightMax;
}

// Standard approach to calculate trapped rainwater
int trapStandard(vector<int>& height) {
    if (height.empty()) return 0;
    
    vector<int> leftMax = standardPrefixMax(height);
    vector<int> rightMax = standardSuffixMax(height);
    
    int totalWater = 0;
    for (int i = 0; i < height.size(); i++) {
        int water = min(leftMax[i], rightMax[i]) - height[i];
        if (water > 0)
            totalWater += water;
    }
    return totalWater;
}

int main() {
    // Test cases
    vector<vector<int>> testCases = {
        {0,1,0,2,1,0,1,3,2,1,2,1},  // Expected: 6
        {3,0,2,0,4},                // Expected: 7
        {},                         // Expected: 0
        {1},                        // Expected: 0
        {1,2,3,4,5},               // Expected: 0 (increasing)
        {5,4,3,2,1}                // Expected: 0 (decreasing)
    };
    
    Solution sol;
    
    for (int i = 0; i < testCases.size(); i++) {
        vector<int> height = testCases[i];
        int result1 = sol.trap(height);
        int result2 = trapStandard(height);
        cout << "Test case " << i + 1 << ": ";
        cout << "Approach 1: " << result1 << ", Approach 2: " << result2 << endl;
    }
    
    return 0;
}
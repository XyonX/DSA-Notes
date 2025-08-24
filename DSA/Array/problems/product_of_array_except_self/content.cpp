// Product of Array Except Self - Two Solutions

// First attempt - Works but doesn't satisfy LeetCode constraints (uses division)
class SolutionAttempt {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mult = 1;
        int numZero = 0;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                numZero++;
                continue;
            }
            mult *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (numZero > 1) {
                res.push_back(0);
            }
            else if (numZero == 1) {
                if (nums[i] != 0) {
                    res.push_back(0);
                }
                else {
                    res.push_back(mult);
                }
            }
            else {
                res.push_back(mult / nums[i]);
            }
        }
        return res;
    }
};

// Second attempt - Satisfies LeetCode constraints (no division, O(1) space)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);

        // PrefixProduct
        int prefix = 1;
        for (int i = 0; i < nums.size(); i++) {
            res[i] = prefix;
            prefix *= nums[i];
        }

        // Suffix product
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= suffix;
            suffix *= nums[i];
        }

        return res;
    }
};

// Test cases
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i + 1 < v.size()) cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;
    
    // Test case 1
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> expected1 = {24, 12, 8, 6};
    vector<int> result1 = sol.productExceptSelf(nums1);
    cout << "Test 1:" << endl;
    cout << "Input: ";
    printVector(nums1);
    cout << "Output: ";
    printVector(result1);
    cout << "Expected: ";
    printVector(expected1);
    cout << "Result: " << (result1 == expected1 ? "PASS" : "FAIL") << endl << endl;
    
    // Test case 2
    vector<int> nums2 = {-1, 1, 0, -3, 3};
    vector<int> expected2 = {0, 0, 9, 0, 0};
    vector<int> result2 = sol.productExceptSelf(nums2);
    cout << "Test 2:" << endl;
    cout << "Input: ";
    printVector(nums2);
    cout << "Output: ";
    printVector(result2);
    cout << "Expected: ";
    printVector(expected2);
    cout << "Result: " << (result2 == expected2 ? "PASS" : "FAIL") << endl << endl;
    
    return 0;
}
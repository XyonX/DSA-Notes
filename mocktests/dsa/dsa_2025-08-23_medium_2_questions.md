# DSA Mock Test - Medium Difficulty
**Date**: 2025-08-23
**Difficulty**: Medium
**Total Questions**: 2

---

### Question 1
**Problem**: Given an array of integers `nums` and an integer `k`, return the maximum sum of a subarray of size `k`.

**Example**:
```
Input: nums = [2, 1, 5, 1, 3, 2], k = 3
Output: 9
Explanation: Subarray [5, 1, 3] has the maximum sum of 9.
```

**Constraints**:
- 1 <= nums.length <= 10^5
- 1 <= k <= nums.length
- -10^4 <= nums[i] <= 10^4

#### Your Answer:
```cpp
#include <bits/stdc++.h>

using namespace std;

// Function signature for Question 1
int maxSubarraySum(const vector<int>& arr, int k) {
    int l=0;
    int sum=0;
    int maxSum = INT_MIN;
    for(int r=0;r<arr.size();r++){
        sum+=arr[r];
        
        if(r-l+1>k){
            sum-=arr[l];
            l++;
        }
        if(r-l+1==k){
            maxSum=max(maxSum,sum);
        }
        
        
    }
    return maxSum;
}

// Function signature for Question 2
bool isValidParentheses(const string& s) {
    
    stack<char>st;
    st.push(s[0]);
    
    for( char b : s){
        if(b=='(' || b=='{' || b=='['){
            st.push(b);
            continue;
        }
        
        else if(b== ')' || b=='}' || b==']'){

            char top=st.top();
            st.pop();
            
            if(top=='(' && b==')')continue;
            else if (top=='{'&& b=='}')continue;
            else if(top=='['&& b==']')continue;
            else return false;
            
        }else{
            return false;
        }
    }

    
    
    return true;
}

// Main function with test cases
int main() {
    // Test cases for Question 1: maxSubarraySum
    cout << "=== Testing maxSubarraySum ===" << endl;
    
    // Test case 1
    vector<int> nums1 = {2, 1, 5, 1, 3, 2};
    int k1 = 3;
    int result1 = maxSubarraySum(nums1, k1);
    cout << "Test 1: nums = [2, 1, 5, 1, 3, 2], k = 3" << endl;
    cout << "Expected: 9, Got: " << result1 << " - " << (result1 == 9 ? "PASS" : "FAIL") << endl << endl;
    
    // Test case 2
    vector<int> nums2 = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k2 = 4;
    int result2 = maxSubarraySum(nums2, k2);
    cout << "Test 2: nums = [1, 4, 2, 10, 2, 3, 1, 0, 20], k = 4" << endl;
    cout << "Expected: 24, Got: " << result2 << " - " << (result2 == 24 ? "PASS" : "FAIL") << endl << endl;
    
    // Test case 3: Edge case - single element
    vector<int> nums3 = {5};
    int k3 = 1;
    int result3 = maxSubarraySum(nums3, k3);
    cout << "Test 3: nums = [5], k = 1" << endl;
    cout << "Expected: 5, Got: " << result3 << " - " << (result3 == 5 ? "PASS" : "FAIL") << endl << endl;
    
    // Test cases for Question 2: isValidParentheses
    cout << "=== Testing isValidParentheses ===" << endl;
    
    // Test case 1
    string s1 = "()[]{}";
    bool result4 = isValidParentheses(s1);
    cout << "Test 1: s = \"()[]{}\"" << endl;
    cout << "Expected: true, Got: " << (result4 ? "true" : "false") << " - " << (result4 == true ? "PASS" : "FAIL") << endl << endl;
    
    // Test case 2
    string s2 = "(]";
    bool result5 = isValidParentheses(s2);
    cout << "Test 2: s = \"(]\"" << endl;
    cout << "Expected: false, Got: " << (result5 ? "true" : "false") << " - " << (result5 == false ? "PASS" : "FAIL") << endl << endl;
    
    // Test case 3
    string s3 = "([{}])";
    bool result6 = isValidParentheses(s3);
    cout << "Test 3: s = \"([{}])\"" << endl;
    cout << "Expected: true, Got: " << (result6 ? "true" : "false") << " - " << (result6 == true ? "PASS" : "FAIL") << endl << endl;
    
    // Test case 4: Empty string
    string s4 = "";
    bool result7 = isValidParentheses(s4);
    cout << "Test 4: s = \"\"" << endl;
    cout << "Expected: true, Got: " << (result7 ? "true" : "false") << " - " << (result7 == true ? "PASS" : "FAIL") << endl << endl;
    
    return 0;
}

```

---

### Question 2
**Problem**: Given a string `s` containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

**Example**:
```
Input: s = "()[]{}"
Output: true

Input: s = "(]"
Output: false
```

**Constraints**:
- 1 <= s.length <= 10^4
- s consists of parentheses only '()[]{}'.

---

**Instructions**:
1. Write your solutions in the provided code blocks
2. Include brief explanations of your approach
3. Submit this file with your completed answers
4. Use "Evaluate mock test dsa_2025-08-23_medium_2_questions.md" when ready for feedback
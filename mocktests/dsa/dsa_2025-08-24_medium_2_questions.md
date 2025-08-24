# DSA Mock Test

- Date: 2025-08-24
- Difficulty: Medium
- Number of Questions: 2
- Duration: 45 minutes

## Question 1

**Problem:** Two Sum
**Description:** Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`. You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Example 1:**
Input: `nums = [2,7,11,15]`, `target = 9`
Output: `[0,1]`
Explanation: Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.

**Example 2:**
Input: `nums = [3,2,4]`, `target = 6`
Output: `[1,2]`

**Constraints:**
- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Only one valid answer exists.

### Your Answer:
```cpp
#include <vector>
#include <iostream>
#include <cassert>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:


    vector<int> twoSum(vector<int>& arr, int target) {
        map<int,int>freq;
        
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]=i;
        }
        for(int i=0;i<arr.size();i++){
            int comp=target-arr[i];
            if(freq.find(comp) !=freq.end()){
                if(i !=freq[comp])
                return {i,freq[comp]};
            }
        }
        return {};
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> expected1 = {0, 1};
    vector<int> result1 = sol.twoSum(nums1, target1);
    assert(result1 == expected1);
    cout << "Test case 1 passed!" << endl;
    
    // Test case 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> expected2 = {1, 2};
    vector<int> result2 = sol.twoSum(nums2, target2);
    assert(result2 == expected2);
    cout << "Test case 2 passed!" << endl;
    
    // Additional test case
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> expected3 = {0, 1};
    vector<int> result3 = sol.twoSum(nums3, target3);
    assert(result3 == expected3);
    cout << "Additional test case passed!" << endl;
    
    cout << "All test cases passed!" << endl;
    
    return 0;
}
}
```

## Question 2

**Problem:** Longest Substring Without Repeating Characters
**Description:** Given a string `s`, find the length of the longest substring without repeating characters.

**Example 1:**
Input: `s = "abcabcbb"`
Output: `3`
Explanation: The answer is `"abc"`, with the length of 3.

**Example 2:**
Input: `s = "bbbbb"`
Output: `1`
Explanation: The answer is `"b"`, with the length of 1.

**Example 3:**
Input: `s = "pwwkew"`
Output: `3`
Explanation: The answer is `"wke"`, with the length of 3. Notice that the answer must be a substring, `"pwke"` is a subsequence and not a substring.

**Constraints:**
- `0 <= s.length <= 5 * 10^4`
- `s` consists of English letters, digits, symbols and spaces.

### Your Answer:
```cpp

#include <iostream>
#include <string>
#include <cassert>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        if(s.empty())return 0;
        map<char,int>freq;
        
        int l=0;
        int maxLength=INT_MIN;
        
        for(int r=0;r<s.size();r++){
            
            if(freq.find(s[r]) != freq.end()){
                l=freq[s[r]]+1;
            }
            
            maxLength=max(maxLength,r-l+1);
            freq[s[r]]=r;
        }
        
        return maxLength;
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    string s1 = "abcabcbb";
    int expected1 = 3;
    int result1 = sol.lengthOfLongestSubstring(s1);
    assert(result1 == expected1);
    cout << "Test case 1 passed!" << endl;
    
    // Test case 2
    string s2 = "bbbbb";
    int expected2 = 1;
    int result2 = sol.lengthOfLongestSubstring(s2);
    assert(result2 == expected2);
    cout << "Test case 2 passed!" << endl;
    
    // Test case 3
    string s3 = "pwwkew";
    int expected3 = 3;
    int result3 = sol.lengthOfLongestSubstring(s3);
    assert(result3 == expected3);
    cout << "Test case 3 passed!" << endl;
    
    // Additional test case
    string s4 = "";
    int expected4 = 0;
    int result4 = sol.lengthOfLongestSubstring(s4);
    assert(result4 == expected4);
    cout << "Additional test case passed!" << endl;
    
    cout << "All test cases passed!" << endl;
    
    return 0;
}
```

FINISHED IN 45-18=27 MIN
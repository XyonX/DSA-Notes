### Running Sum

**Problem**: Given an array `nums`, return a running sum of the array.

**Solution**: 
- Initialize a sum variable to 0 and an empty result vector
- Iterate through the input array, accumulating the sum
- Push each accumulated sum to the result vector
- Return the result vector

**Time Complexity**: O(n) - We traverse the array once
**Space Complexity**: O(n) - We store the result array

**Practice Count**: 1

**LeetCode Link**: https://leetcode.com/problems/running-sum-of-1d-array/

### Notes
- This is a straightforward prefix sum problem
- The solution efficiently computes the running sum in a single pass
- Can be optimized to use O(1) space if we modify the input array in-place (if allowed)
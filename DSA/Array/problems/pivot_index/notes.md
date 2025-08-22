### Pivot Index

**Problem**: Given an array of integers `nums`, return the leftmost pivot index. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

**Solution**: 
- Compute prefix sums: cumulative sum from left to right
- Compute suffix sums: cumulative sum from right to left
- Find the first index where prefix sum equals suffix sum

**Time Complexity**: O(n) - We traverse the array three times (prefix, suffix, comparison)
**Space Complexity**: O(n) - We store prefix and suffix arrays

**Practice Count**: 1

**LeetCode Link**: https://leetcode.com/problems/find-pivot-index/

### Notes
- This solution uses extra space for prefix and suffix arrays
- Can be optimized to O(1) space by computing total sum first, then using prefix sum to find pivot
- The pivot index can be found by checking if `prefixSum[i] == totalSum - prefixSum[i] - nums[i]`
- Edge cases: empty array, single element array, no pivot index
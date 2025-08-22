### Range Sum Query - Immutable

**Problem**: Given an integer array `nums`, handle multiple queries of the following type:
1. `NumArray(int[] nums)` Initializes the object with the integer array `nums`.
2. `int sumRange(int left, int right)` Returns the sum of the elements of `nums` between indices `left` and `right` inclusive (i.e., `nums[left] + nums[left + 1] + ... + nums[right]`).

**Solution**: 
- Precompute prefix sums in the constructor
- For sumRange queries, use the formula: `pSum[right] - pSum[left-1]` (or `pSum[right]` if left is 0)

**Time Complexity**: 
- Constructor: O(n) - Precompute prefix sums
- sumRange: O(1) - Constant time query using prefix sums

**Space Complexity**: O(n) - Store prefix sum array

**Practice Count**: 1

**LeetCode Link**: https://leetcode.com/problems/range-sum-query-immutable/

### Notes
- This is a classic prefix sum problem that demonstrates the power of precomputation
- The trade-off is O(n) space for O(1) query time
- Very efficient for scenarios with many range sum queries
- Can be extended to 2D arrays for 2D range sum queries
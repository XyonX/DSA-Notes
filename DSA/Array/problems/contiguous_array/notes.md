### Contiguous Array

**Problem**: Given a binary array `nums`, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

**Solution**: 
- Convert 0s to -1 to transform the problem into finding subarray with sum 0
- Use prefix sum with hashmap to track first occurrence of each sum
- When same sum is encountered again, the subarray between indices has sum 0 (equal 0s and 1s)
- Track maximum length found

**Time Complexity**: O(n) - Single pass through array with O(1) hashmap operations
**Space Complexity**: O(n) - Hashmap stores prefix sums

**Practice Count**: 1

**LeetCode Link**: https://leetcode.com/problems/contiguous-array/

### Notes
- This problem cleverly transforms the binary array problem into a zero-sum subarray problem
- The key insight is converting 0s to -1, making equal 0s and 1s sum to 0
- Uses the same prefix sum + hashmap technique as subarray sum equals k
- Demonstrates how problem transformation can simplify complex problems
- Edge case: empty array returns 0, single element array returns 0
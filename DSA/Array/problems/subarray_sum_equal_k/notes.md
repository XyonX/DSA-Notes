### Subarray Sum Equals K

**Problem**: Given an array of integers `nums` and an integer `k`, return the total number of subarrays whose sum equals to `k`.

**Solution**: 
- Use prefix sum with hashmap approach
- Initialize hashmap with `{0: 1}` (empty subarray sum 0)
- Iterate through array, maintaining running sum
- For each prefix sum, check if `sum - k` exists in hashmap
- If exists, add the frequency to count
- Update hashmap with current prefix sum

**Time Complexity**: O(n) - Single pass through array with O(1) hashmap operations
**Space Complexity**: O(n) - Hashmap stores prefix sums

**Practice Count**: 1

**LeetCode Link**: https://leetcode.com/problems/subarray-sum-equals-k/

### Notes
- This is a classic problem that demonstrates the power of prefix sums with hashmap
- The key insight is that if `prefixSum[j] - prefixSum[i] = k`, then subarray from `i+1` to `j` sums to `k`
- Handles both positive and negative numbers in the array
- More efficient than brute force O(n²) approach
- Can be extended to find subarrays with sum divisible by k, or other variations
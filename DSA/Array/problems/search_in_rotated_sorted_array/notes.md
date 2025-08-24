# Search in Rotated Sorted Array

## Problem Description
There is an integer array nums sorted in ascending order (with distinct values). Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

## Key Concepts
- Modified binary search
- Rotated sorted array properties
- Identifying sorted halves in a rotated array

## Algorithm
The solution uses a modified binary search approach:

1. At each step, at least one half of the array (left or right of mid) is always sorted
2. Determine which half is sorted by comparing nums[left] with nums[mid]
3. If the left half is sorted (nums[left] <= nums[mid]):
   - Check if target lies within the range [nums[left], nums[mid]]
   - If yes, search in the left half; otherwise, search in the right half
4. If the right half is sorted (nums[left] > nums[mid]):
   - Check if target lies within the range [nums[mid], nums[right]]
   - If yes, search in the right half; otherwise, search in the left half

### Key Insights:
- In a rotated sorted array, at any midpoint, at least one side (left or right) will always be sorted
- We can determine which half is sorted by comparing the endpoints with the midpoint
- Once we know which half is sorted, we can check if the target lies within that range

## Time and Space Complexity
- Time Complexity: O(log n) where n is the number of elements
- Space Complexity: O(1)

## Notes
- The key insight is that we don't need to explicitly find the pivot point
- Instead, we can work with the property that at least one half is always sorted
- Edge cases to consider:
  - Single element array
  - Array with no rotation (normal sorted array)
  - Target not present in the array
  - Target at the pivot point

## Variations
- With duplicates allowed, the algorithm becomes more complex as we can't always determine which half is sorted
- In that case, we might need to skip duplicates which can degrade performance to O(n) in worst case

## LeetCode
https://leetcode.com/problems/search-in-rotated-sorted-array/
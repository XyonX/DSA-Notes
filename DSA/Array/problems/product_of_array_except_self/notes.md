# Product of Array Except Self

## Problem Description
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The solution must run in O(n) time and without using the division operation.

## Key Concepts
- Prefix and suffix products
- Two-pass algorithm
- Space optimization techniques

## Algorithm
The optimal solution uses a two-pass approach:
1. First pass (left to right): Calculate prefix products and store in result array
2. Second pass (right to left): Calculate suffix products and multiply with existing prefix products

### Approach Details:
- Initialize result array with all 1s
- In the first pass, for each position i, store the product of all elements to the left of i
- In the second pass, for each position i, multiply the existing value with the product of all elements to the right of i
- Use a variable to keep track of the running product from the right side

## Time and Space Complexity
- Time Complexity: O(n) where n is the number of elements
- Space Complexity: O(1) extra space (not counting the output array)

## Alternative Approaches
1. Division-based approach (not allowed in this problem):
   - Calculate the product of all elements
   - For each element, divide the total product by that element
   - Special handling needed for zeros

2. Using additional arrays for prefix and suffix products:
   - Calculate prefix products in one array
   - Calculate suffix products in another array
   - Multiply corresponding elements to get the result
   - Space complexity would be O(n)

## Notes
- The key insight is that for each position, the result is the product of all elements to its left multiplied by the product of all elements to its right
- The two-pass approach allows us to calculate these products efficiently without using extra space
- Edge cases to consider:
  - Arrays with zeros (handled by counting zeros in the division-based approach)
  - Single element arrays
  - Empty arrays

## LeetCode
https://leetcode.com/problems/product-of-array-except-self/
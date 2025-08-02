# Single Number

## Problem Statement
Given a non-empty array of integers, where every element appears twice except one, find the element that appears only once.

Constraints:
- Must run in O(n) time
- Use only O(1) extra space

## Approach
This solution uses the XOR operation to find the single number:
1. XOR properties used:
   - a ^ a = 0 → same numbers cancel out
   - a ^ 0 = a → XOR with 0 has no effect
   - XOR is commutative and associative → order doesn't matter
2. By XORing all elements:
   - Duplicates cancel each other out
   - Only the single element remains

## Time Complexity
O(n) - Single pass through the array

## Space Complexity
O(1) - Only using constant extra space

## Known Issues
- The code initializes res with nums[0] and starts the loop from index 1, which works but is less conventional than initializing res to 0 and starting from index 0
- No comments in the code for better readability

## LeetCode Link
[Single Number](https://leetcode.com/problems/single-number/)
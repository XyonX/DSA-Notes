# String to Integer (ATOI) - Recursive Implementation

## Problem Description
Implement the `myAtoi(string s)` function recursively, which converts a string to a 32-bit signed integer.

## Approach
The recursive implementation handles:
1. Skipping leading whitespace
2. Determining the sign of the number
3. Converting digits to an integer
4. Handling overflow conditions
5. Stopping conversion when a non-digit character is encountered

## Complexity
- Time complexity: O(n) where n is the length of the string
- Space complexity: O(n) due to the recursive call stack

## Known Issues
- The implementation could be optimized to avoid passing so many parameters
- Edge cases with very large numbers might need additional handling

## LeetCode
Problem link: https://leetcode.com/problems/string-to-integer-atoi/
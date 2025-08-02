# String to Integer (ATOI)

## Problem Description
Implement the `myAtoi(string s)` function, which converts a string to a 32-bit signed integer.

## Approach
The implementation handles:
1. Skipping leading whitespace
2. Determining the sign of the number
3. Converting digits to an integer
4. Handling overflow conditions

Two implementations are provided:
1. Iterative approach (`myAtoi1`)
2. Recursive approach (`myAtoi`)

## Complexity
- Time complexity: O(n) where n is the length of the string
- Space complexity: O(1) for iterative, O(n) for recursive due to call stack

## Known Issues
- The recursive implementation returns -1 for invalid inputs instead of 0
- No explicit handling of 32-bit integer overflow
- The main function only tests one specific case

## LeetCode
Problem link: https://leetcode.com/problems/string-to-integer-atoi/
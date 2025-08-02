# Power Function Implementation

## Problem Description
Implement the power function (x^n) using recursion.

## Approach
Two implementations are provided:
1. A basic recursive implementation that multiplies x by itself n times
2. An optimized version that handles negative exponents and edge cases

## Complexity
- Time complexity: O(n) for the basic recursive implementation
- Space complexity: O(n) due to the recursive call stack

## Known Issues
- The basic implementation has precision issues with floating-point numbers
- Not optimized for large exponents (could cause stack overflow)
- The optimized version in the Solution class is not purely recursive (uses iterative approach for power calculation)

## LeetCode
Problem link: https://leetcode.com/problems/powx-n/
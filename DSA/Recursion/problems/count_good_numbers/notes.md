# Count Good Numbers

## Problem Description
Count the number of "good" numbers of length n where:
- Even index positions can have digits {0, 2, 4, 6, 8} (5 choices)
- Odd index positions can have digits {2, 3, 5, 7} (4 choices)

## Approach
This is a combinatorics problem solved using modular exponentiation:
- Count of even positions: (n + 1) / 2
- Count of odd positions: n / 2
- Total combinations: (5^(even positions) * 4^(odd positions)) % MOD

The implementation uses fast exponentiation (binary exponentiation) to efficiently compute large powers under modulo.

## Complexity
- Time complexity: O(log n) due to fast exponentiation
- Space complexity: O(1)

## Known Issues
- This implementation is not recursive, despite being placed in the Recursion topic
- It uses an iterative approach for fast exponentiation
- The problem is more mathematical than recursive in nature

## LeetCode
Problem link: https://leetcode.com/problems/count-good-numbers/
# Good Number Checker

## Problem Description
Check if a number is a "good number" based on specific rules:
- Even index positions must have even digits
- Odd index positions must have prime digits

## Approach
The implementation uses recursion to check each digit of the number against the rules based on its position (index).

A helper function `isPrime` is used to determine if a digit is prime (2, 3, 5, 7).

## Complexity
- Time complexity: O(d) where d is the number of digits in the number
- Space complexity: O(d) due to the recursive call stack

## Known Issues
- The `isPrime` function has been corrected from the original version which had a bug (checking `number % 2` instead of `number % i`)
- The implementation assumes the number of digits is known and passed as a parameter
- Indexing starts from the rightmost digit (least significant digit)

## Note
This implementation appears to be for a custom problem rather than a standard LeetCode problem.
# Maximum Sum Subarray of Size K

## Problem Statement
Given an array of integers and a number k, find the maximum sum of any contiguous subarray of size k.

## Approach
This problem is solved using the sliding window technique:
1. We maintain a window with two pointers (l and r)
2. We expand the window by moving the right pointer and adding elements to the sum
3. When the window size exceeds k, we shrink it from the left by removing the leftmost element
4. We update the maximum sum whenever we have a window of exactly size k

## Key Insight
In each iteration, we maintain a valid window. When we add an element that makes the window exceed size k, we immediately shrink it. This ensures that after shrinking, the window size is exactly k, allowing us to check for the maximum sum.

## Time Complexity
O(n) where n is the size of the array

## Space Complexity
O(1) as we only use a constant amount of extra space
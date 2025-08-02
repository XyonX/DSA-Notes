# Majority Element

## Problem Statement
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

## Approach
This solution implements the Boyer-Moore Majority Vote Algorithm:
1. Initialize a counter to 0 and a candidate element to 0
2. Iterate through the array:
   - If counter is 0, set the current element as the new candidate
   - If current element equals candidate, increment counter
   - Otherwise, decrement counter
3. Return the candidate

The algorithm works because the majority element appears more than n/2 times, so even if it's "cancelled out" by all other elements, it will still remain as the candidate.

## Time Complexity
O(n) - Single pass through the array

## Space Complexity
O(1) - Only using constant extra space

## Known Issues
- The code includes commented out basic implementation using map which has O(n) space complexity
- No comments explaining the Boyer-Moore algorithm in the code
- Variable names could be more descriptive (num could be majorityElement)

## LeetCode Link
[Majority Element](https://leetcode.com/problems/majority-element/)
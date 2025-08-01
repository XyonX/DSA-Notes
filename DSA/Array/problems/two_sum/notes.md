# Two Sum Problem

## Problem Statement
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to the target.

You may assume that:
- Each input has exactly one solution.
- You may not use the same element twice.
- You can return the answer in any order.

## Example
Input: nums = [2, 7, 11, 15], target = 9  
Output: [0, 1]  
Explanation: nums[0] + nums[1] == 9, so we return [0, 1].

## Approach
The optimal approach uses a hash map:
1. First, traverse the array once and put elements in a hash map (value -> index)
2. Then, iterate over elements of the array and find if the complement (target - current element) is available in the map
3. Return the indices if found

## Time Complexity
O(n) - We traverse the list containing n elements only twice.

## Space Complexity
O(n) - The extra space required depends on the number of items stored in the hash table, which stores at most n elements.

## LeetCode Link
[Two Sum - LeetCode](https://leetcode.com/problems/two-sum/)
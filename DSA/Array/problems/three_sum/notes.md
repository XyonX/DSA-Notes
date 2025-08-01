# Three Sum Problem

## Problem Statement
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

## Example
Input: nums = [-1,0,1,2,-1,-4]  
Output: [[-1,-1,2],[-1,0,1]]  

## Approach
The optimal approach uses sorting and two pointers:
1. Sort the array to help with avoiding duplicates and using the two-pointer technique
2. Iterate through the array, fixing one element at a time
3. For each fixed element, use two pointers (left and right) to find pairs that sum to the negative of the fixed element
4. Skip duplicates at each level to avoid duplicate triplets

## Time Complexity
O(n^2) - We have an outer loop that runs n times, and for each iteration, we do a two-pointer search that takes O(n) time.

## Space Complexity
O(1) - Not counting the space used for the output array.

## LeetCode Link
[Three Sum - LeetCode](https://leetcode.com/problems/3sum/)
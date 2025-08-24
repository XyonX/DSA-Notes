# Trapping Rainwater

## Problem Description
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

## Key Concepts
- For each position, the amount of water that can be trapped depends on the minimum of the maximum heights to its left and right
- Water at position i = min(leftMax[i], rightMax[i]) - height[i] (if positive)
- Two approaches:
  1. Using map-based prefix/suffix max (as in the provided code)
  2. Using vector-based standard approach

## Algorithm
1. Compute the maximum height to the left of each position (prefix max)
2. Compute the maximum height to the right of each position (suffix max)
3. For each position, calculate trapped water as min(leftMax, rightMax) - height
4. Sum up all the trapped water

## Time and Space Complexity
- Time Complexity: O(n) where n is the number of elements
- Space Complexity: O(n) for storing prefix and suffix max arrays

## Alternative Approaches
1. Two-pointer approach: O(1) space complexity
2. Stack-based approach: O(n) time and space

## Notes
- The provided solution uses map-based prefix/suffix max which works but is less efficient than vector-based approach
- The standard approach using vectors is more efficient and commonly used
- Edge cases to consider: empty array, single element, strictly increasing/decreasing arrays

## LeetCode
https://leetcode.com/problems/trapping-rain-water/
# Maximum Profit (Buy and Sell Stock)

## Problem Statement
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

## Approach
This solution implements two approaches:

1. Brute Force Approach (commented out):
   - Uses nested loops to check all possible buy-sell combinations
   - Time complexity: O(n²)
   - Space complexity: O(1)
   - This approach is correct but not efficient and doesn't pass all test cases on LeetCode due to time constraints

2. Greedy Approach (implemented):
   - Keep track of the minimum price seen so far
   - For each day, calculate the profit if we sell on that day (current price - minimum price so far)
   - Keep track of the maximum profit seen so far
   - Time complexity: O(n)
   - Space complexity: O(1)

## Time Complexity
O(n) for the greedy approach

## Space Complexity
O(1) for the greedy approach

## Known Issues
- The code includes commented out brute force implementation which is less efficient
- No comments explaining the greedy approach in the code
- Variable names could be more descriptive (minPrice, maxProfit)

## LeetCode Link
[Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
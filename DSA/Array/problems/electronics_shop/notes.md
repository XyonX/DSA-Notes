# Electronics Shop

## Problem Description
You're given:
- A list of keyboard prices
- A list of USB drive prices
- A budget b

Goal: Find the maximum possible sum of one keyboard + one USB drive that does not exceed the budget. If no combination is valid, return -1.

## Constraints
- 1 ≤ number of keyboards (n), number of drives (m) ≤ 1000
- 1 ≤ price of each item ≤ 10^6
- 1 ≤ budget (b) ≤ 10^7

## Solution Approach
The solution uses a brute force approach with some optimizations:
1. Sort keyboards in descending order and drives in ascending order
2. For each keyboard, iterate through drives:
   - Calculate the cost of the combination
   - If the cost exceeds the budget, break (since drives are sorted, further drives will also exceed)
   - Keep track of the maximum valid cost found

## Time Complexity
O(n*m) in the worst case, where n is the number of keyboards and m is the number of drives.

## Space Complexity
O(1) - only using a few variables.
# Fractional Knapsack Problem

This is another classic greedy algorithm problem that involves maximizing the total value of items placed in a knapsack with limited capacity, where fractional parts of items can be taken.

## Problem Statement

Given a set of items, each with a weight and a value, and a knapsack with a limited capacity, the goal is to maximize the total value of items included in the knapsack. Unlike the 0/1 Knapsack Problem, you can include fractions of items to achieve this maximum value.

## Approach

The greedy strategy is to prioritize items with the highest value-to-weight ratio:

1. Calculate the value-to-weight ratio for each item
2. Sort items in descending order of this ratio
3. Iterate through sorted items:
   - If an item fits completely, take it entirely
   - If an item doesn't fit completely, take a fraction of it that fills the remaining capacity
4. Continue until the knapsack is full or all items are considered

## Time Complexity

- O(n log n) due to sorting, where n is the number of items
- O(n) for the selection process

## Space Complexity

- O(1) additional space (excluding input storage)

## Key Points

- This is a classic example of a greedy algorithm where the greedy choice leads to an optimal solution
- Unlike the 0/1 Knapsack Problem, the Fractional Knapsack Problem can be solved optimally using a greedy approach
- The key insight is that items with higher value-to-weight ratios should be prioritized
- This problem has practical applications in resource allocation, budgeting, and investment decisions

## Example

Consider these items with a knapsack capacity of 50:
- Item 1: value = 60, weight = 10 (ratio = 6.0)
- Item 2: value = 100, weight = 20 (ratio = 5.0)
- Item 3: value = 120, weight = 30 (ratio = 4.0)

After sorting by ratio and applying the greedy selection:
1. Take all of Item 1 (value = 60, weight = 10, remaining capacity = 40)
2. Take all of Item 2 (value = 100, weight = 20, remaining capacity = 20)
3. Take 2/3 of Item 3 (value = 80, weight = 20, remaining capacity = 0)

Result: Total value = 60 + 100 + 80 = 240.00
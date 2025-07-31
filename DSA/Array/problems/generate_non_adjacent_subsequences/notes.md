# Generate Non-Adjacent Subsequences

## Problem Description
This code generates all possible subsequences from an array where no two elements are adjacent in the original array. It uses recursion and backtracking to explore all valid combinations.

## Implementation Details
The solution includes two versions of the `genSubSet` function:
1. An incorrect implementation that attempts to skip elements at odd indices
2. A correct implementation that properly handles non-adjacent element selection by skipping the next element when including the current one

## Known Issues
The first implementation (commented out) has a logical error in how it handles adjacency. It incorrectly tries to skip elements at odd indices rather than ensuring that selected elements are not adjacent in the original array.

## Key Concepts
- Recursion
- Backtracking
- Non-adjacent element selection
- Subsequence generation
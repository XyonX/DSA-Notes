# Merge Intervals

## Problem Description
Given an array of intervals where intervals[i] = [start_i, end_i], merge all overlapping intervals and return an array of the non-overlapping intervals that cover all the intervals in the input.

## Key Concepts
- Sorting intervals by start time
- Greedy algorithm approach
- Interval merging techniques

## Algorithm
1. Sort intervals by their start times
2. Initialize a result list with the first interval
3. Iterate through the remaining intervals:
   - If the current interval overlaps with the last interval in the result (current start <= last end):
     - Merge them by updating the end time of the last interval to the maximum of both end times
   - Otherwise:
     - Add the current interval to the result list

### Overlap Condition:
Two intervals [a, b] and [c, d] overlap if c <= b (assuming a <= c after sorting)

## Time and Space Complexity
- Time Complexity: O(n log n) where n is the number of intervals (due to sorting)
- Space Complexity: O(1) extra space (not counting the output array)

## Notes
- Sorting is crucial for this approach to work correctly
- The key insight is that after sorting, we only need to check if the current interval overlaps with the last merged interval
- Edge cases to consider:
  - Empty input
  - Single interval
  - Intervals that touch at endpoints (e.g., [1,3] and [3,5] should be merged to [1,5])
  - Nested intervals (one interval completely inside another)
  - Disjoint intervals (no overlap)

## LeetCode
https://leetcode.com/problems/merge-intervals/
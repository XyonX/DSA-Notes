# Activity Selection Problem

This is a classic greedy algorithm problem that involves selecting the maximum number of non-overlapping activities that can be performed by a single person or resource.

## Problem Statement

Given a set of activities with their start and end times, the goal is to select the maximum number of activities that don't overlap with each other.

## Approach

The greedy strategy is to always select the activity that ends earliest, as this leaves the maximum time available for subsequent activities:

1. Sort all activities by their end times
2. Select the first activity (earliest end time)
3. For each subsequent activity, if its start time is greater than or equal to the end time of the last selected activity, select it
4. Continue until all activities are considered

## Time Complexity

- O(n log n) due to sorting, where n is the number of activities
- O(n) for the selection process

## Space Complexity

- O(1) additional space (excluding input storage)

## Key Points

- This is a classic example of a greedy algorithm
- The greedy choice property holds: selecting the activity that ends earliest leads to an optimal solution
- The optimal substructure property also holds: once we make the greedy choice, the remaining subproblem has the same structure
- This problem has practical applications in scheduling, resource allocation, and interval management

## Example

Consider these activities:
- Activity 1: Start = 1, End = 4
- Activity 2: Start = 3, End = 5
- Activity 3: Start = 5, End = 7
- Activity 4: Start = 6, End = 10

After sorting by end time and applying the greedy selection:
1. Select Activity 1 (ends at 4)
2. Skip Activity 2 (starts at 3, overlaps with 4)
3. Select Activity 3 (starts at 5, ends at 7)
4. Skip Activity 4 (starts at 6, overlaps with 7)

Result: 2 activities selected (Activity 1 and Activity 3)
# Greedy Discussion

## activity_selection

The Activity Selection Problem is a classic example of a problem that can be solved optimally using a greedy algorithm.

### Problem Description

Given a set of activities with their start and end times, the goal is to select the maximum number of non-overlapping activities that can be performed by a single person or resource.

### Greedy Strategy

The key insight is to always select the activity that ends earliest. This greedy choice leads to an optimal solution because:

1. It leaves the maximum amount of time available for subsequent activities
2. Any optimal solution must include an activity that ends earliest (if we're looking at activities compatible with previously selected ones)

### Algorithm Steps

1. Sort all activities by their end times
2. Select the first activity (earliest end time)
3. For each subsequent activity, if its start time is greater than or equal to the end time of the last selected activity, select it
4. Continue until all activities are considered

### Time and Space Complexity

- Time Complexity: O(n log n) due to sorting, where n is the number of activities
- Space Complexity: O(1) additional space (excluding input storage)

### Key Properties

1. **Greedy Choice Property**: Making the greedy choice (selecting the activity that ends earliest) leads to an optimal solution
2. **Optimal Substructure**: After making the greedy choice, the remaining subproblem has the same structure as the original problem

### Applications

This problem has practical applications in:
- Job scheduling
- Resource allocation
- Interval management
- Meeting room allocation
- CPU scheduling

### Implementation Details

The implementation uses a struct to represent activities with start and end times, a comparator function for sorting, and a greedy selection function that iterates through sorted activities to count non-overlapping ones.

## fractional_knapsack

The Fractional Knapsack Problem is another classic example where a greedy approach leads to an optimal solution.

### Problem Description

Given a set of items, each with a weight and a value, and a knapsack with a limited capacity, the goal is to maximize the total value of items included in the knapsack. Unlike the 0/1 Knapsack Problem, you can include fractions of items to achieve this maximum value.

### Greedy Strategy

The key insight is to prioritize items with the highest value-to-weight ratio:

1. Calculate the value-to-weight ratio for each item
2. Sort items in descending order of this ratio
3. Iterate through sorted items:
   - If an item fits completely, take it entirely
   - If an item doesn't fit completely, take a fraction of it that fills the remaining capacity

### Time and Space Complexity

- Time Complexity: O(n log n) due to sorting, where n is the number of items
- Space Complexity: O(1) additional space (excluding input storage)

### Key Properties

1. **Greedy Choice Property**: Taking items with the highest value-to-weight ratio leads to an optimal solution
2. **Optimal Substructure**: After making the greedy choice, the remaining subproblem has the same structure

### Applications

This problem has practical applications in:
- Resource allocation
- Budgeting
- Investment decisions
- Cargo loading optimization

### Implementation Details

The implementation uses a struct to represent items with value and weight, a comparator function for sorting by value-to-weight ratio, and a greedy selection function that iterates through sorted items, taking whole items when possible and fractions when needed.
# Merge Sort Implementation

## Problem Description
Implementation of the merge sort algorithm in C++. Merge sort is a divide-and-conquer algorithm that divides the input array into two halves, recursively sorts them, and then merges the two sorted halves.

## Code Explanation
The implementation includes:
1. `merge()` function: Merges two sorted subarrays into one sorted array
2. `mergeSort()` function: Recursively divides the array and calls merge to combine sorted parts
3. `display()` function: Utility function to print the array
4. `main()` function: Demonstrates the sorting with a sample array

## Time and Space Complexity
- Time Complexity: O(n log n) in all cases (best, average, and worst)
- Space Complexity: O(n) due to the temporary arrays used in merging

## Key Points
- Stable sorting algorithm (maintains relative order of equal elements)
- Not an in-place sorting algorithm (requires additional memory)
- Divide and conquer approach
- Well-suited for large datasets

## Known Issues
- The code has a minor typo in a comment ("callfor irhgt part" instead of "call for right part")
- No input validation for edge cases
# Sorting Algorithms Discussion

## Merge Sort
Merge sort is a highly efficient, stable, comparison-based sorting algorithm. It works on the principle of Divide and Conquer, where the array is recursively divided into two halves until each subarray contains a single element, and then merging those subarrays in a sorted manner to produce the final sorted array.

### How it works:
1. **Divide**: The array is divided into two halves
2. **Conquer**: Each half is recursively sorted
3. **Combine**: The sorted halves are merged together

### Advantages:
- Consistent O(n log n) time complexity
- Stable sorting (maintains relative order of equal elements)
- Predictable performance

### Disadvantages:
- Requires O(n) extra space
- Not adaptive (doesn't perform better on partially sorted arrays)

### Use Cases:
- When stable sorting is required
- When consistent performance is more important than space efficiency
- External sorting (sorting data that doesn't fit in memory)
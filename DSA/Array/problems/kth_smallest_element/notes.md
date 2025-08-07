Problem: Kth Smallest Element
Approaches:
- Better: sort array and return arr[k-1] (O(n log n), O(1) extra).
- Optimal: max-heap of size k to keep k smallest seen; top is kth (O(n log k), O(k)).
Status: solved (per user preference even if minor syntax issues).
Edge cases: k out of range, duplicates, negatives.

## Reverse Every K Elements

### Problem Statement
Given a list of integers and an integer `k`, reverse every sublist of `k` elements. If the remaining elements are fewer than `k`, reverse them as well.

### Approach
1. **Iterate through the list** in steps of `k`.
2. **Reverse each sublist**:
   - For each sublist starting at index `i`, set `left = i` and `right = min(i + k - 1, len(lst) - 1)`.
   - Swap elements from the ends inward until `left >= right`.
3. **Edge Case**: Handles sublists smaller than `k` by adjusting the `right` pointer.

### Complexity
- **Time**: `O(n)`, where `n` is the length of the list.
- **Space**: `O(1)` (in-place).

### Notes
- The `swap` helper function simplifies the reversal logic.
- The solution is efficient and modifies the list in-place.
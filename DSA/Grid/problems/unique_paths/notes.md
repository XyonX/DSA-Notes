## Unique Paths in Grid

### Problem Statement
Given a grid of size `n x n`, count the number of unique paths from the top-left corner `(0, 0)` to the bottom-right corner `(n-1, n-1)`. You can only move **right** or **down**.

### Approaches
1. **Recursive Solution**:
   - **Base Case**: If the current position is `(n-1, n-1)`, return `1` (reached the destination).
   - **Edge Case**: If the current position is out of bounds, return `0`.
   - **Recursive Calls**: Sum the paths from moving right and moving down.
   - **Time Complexity**: Exponential (`O(2^n)`).

2. **Memoized Solution**:
   - Uses a `dp` table to store intermediate results and avoid redundant calculations.
   - **Time Complexity**: `O(n^2)`.

### Code
- **Recursive**: `numGridUniquePath`
- **Memoized**: `numGUP`

### Notes
- The recursive solution is inefficient for larger grids due to repeated calculations.
- The memoized version optimizes this by caching results.
- Next step: Implement the **tabulation (iterative DP)** method for further optimization.
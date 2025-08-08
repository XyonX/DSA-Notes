## Unique Paths in Grid

### Discussion
1. **Recursive Approach**:
   - Simple but inefficient for larger grids due to overlapping subproblems.
   - Example: For `n=4`, the recursive tree has many repeated states.

2. **Memoization**:
   - Uses a `dp` table to store results of subproblems.
   - Reduces time complexity to `O(n^2)` by avoiding redundant calculations.
   - Space complexity: `O(n^2)` for the `dp` table.

3. **Further Optimization**:
   - **Tabulation**: Can be implemented iteratively to reduce space complexity further.
   - **Combinatorics**: The problem can also be solved using combinatorial mathematics (number of ways to choose moves).
### Sudoku Solver (Backtracking)

This C++ implementation solves a Sudoku puzzle using a backtracking algorithm. It recursively tries all possible valid digits for empty cells (`.`) and backtracks if a solution is invalid.

#### Key Features:
1. **Backtracking**: Efficiently explores all possible configurations.
2. **Validation**: Checks row, column, and 3x3 subgrid constraints.
3. **Print Utility**: Includes a function to display the board before and after solving.

#### Usage:
```cpp
vector<vector<char>> board = {
    {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
    // ... (other rows)
};
solveSudoku(board);
printBoard(board);
```

#### Notes:
- Time Complexity: O(9^(n*n)) in the worst case (exponential, but optimized by backtracking).
- Space Complexity: O(n*n) for the board.
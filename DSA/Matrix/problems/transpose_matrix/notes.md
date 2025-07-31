# Transpose of Matrix

This problem involves computing the transpose of a matrix, which flips the matrix over its main diagonal (switching rows and columns).

## Two Approaches

1. **Using Extra Space**:
   - Create a new matrix with dimensions swapped (rows become columns and vice versa)
   - Copy elements such that `result[j][i] = matrix[i][j]`
   - Works for both square and rectangular matrices

2. **In-Place (for square matrices only)**:
   - Swap elements across the main diagonal: `swap(matrix[i][j], matrix[j][i])`
   - Only traverse the upper triangle to avoid swapping elements twice
   - More space-efficient but only works for square matrices

## Time Complexity

- Extra space approach: O(m × n) where m is rows and n is columns
- In-place approach: O(n²) for an n×n square matrix

## Space Complexity

- Extra space approach: O(m × n) additional space
- In-place approach: O(1) additional space

## Key Points

- Transpose is a fundamental matrix operation used in linear algebra
- The in-place approach is only applicable to square matrices
- In technical interviews, it's important to discuss both approaches and their trade-offs
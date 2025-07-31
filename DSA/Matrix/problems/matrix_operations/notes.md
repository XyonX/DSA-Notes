# Matrix Operations

This code demonstrates various operations on 2D matrices in C++:

1. **Matrix Generation**: Creates a matrix with sequential values
2. **Display**: Prints the matrix in a readable format
3. **Row-wise Printing**: Traverses and prints the matrix row by row
4. **Column-wise Printing**: Traverses and prints the matrix column by column
5. **Diagonal Traversal**: Prints the main diagonal elements of a square matrix

## Key Points

- Uses `vector<vector<int>>` for matrix representation
- Includes helper functions for generating and displaying matrices
- Demonstrates different traversal techniques
- Handles square matrix validation for diagonal traversal

## Known Issues

- Minor typo in error message: "not a squarte matrix" should be "not a square matrix"
- Some comments have typos: "antything" should be "anything", "columnd" should be "column"

## Time Complexity

- Matrix generation: O(rows × columns)
- Display: O(rows × columns)
- Row-wise printing: O(rows × columns)
- Column-wise printing: O(rows × columns)
- Diagonal traversal: O(min(rows, columns))

## Space Complexity

- O(rows × columns) for storing the matrix
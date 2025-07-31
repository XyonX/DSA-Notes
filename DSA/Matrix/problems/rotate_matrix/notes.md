# Rotate Matrix by 90 Degrees

This problem involves rotating a square matrix by 90 degrees clockwise in-place.

## Approach

The optimal approach involves two steps:
1. **Transpose the matrix**: Swap elements across the main diagonal
2. **Reverse each row**: Reverse the elements in each row

This achieves a 90-degree clockwise rotation with O(1) extra space.

## Algorithm Steps

1. Transpose the matrix:
   - For each element above the main diagonal, swap it with its corresponding element below the diagonal
   - Only process the upper triangle to avoid double swapping

2. Reverse each row:
   - For each row, swap elements symmetrically from both ends moving toward the center

## Time Complexity

- O(n²) where n is the dimension of the square matrix

## Space Complexity

- O(1) additional space (in-place rotation)

## Key Points

- This is a classic matrix manipulation problem frequently asked in technical interviews
- The two-step approach (transpose + row reversal) is the key insight
- The solution only works for square matrices
- For counter-clockwise rotation, you would reverse rows first and then transpose
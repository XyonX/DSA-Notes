### Chessboard Color Determination

This C function `determine_color` checks if a chessboard square (e.g., "a1", "h8") is white or black based on its coordinates.

#### Logic:
- Convert the column (`a-h`) to an integer (`0-7`).
- Convert the row (`1-8`) to an integer (`0-7`).
- If `(row + column) % 2 == 0`, the square is white; otherwise, black.

#### Example:
```c
printf("%s", determine_color("a1"));  // Output: Black
printf("%s", determine_color("b1"));  // Output: White
```
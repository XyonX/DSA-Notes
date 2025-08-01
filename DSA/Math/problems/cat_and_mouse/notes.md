# Cat and Mouse

## Problem Description
You're given the positions of Cat A, Cat B, and a Mouse on a number line. All animals move at the same speed. The mouse stays still.

Objective: Determine which cat reaches the mouse first.

- If Cat A is closer → print "Cat A"
- If Cat B is closer → print "Cat B"
- If both reach at the same time → print "Mouse C"

## Solution Approach
The solution is straightforward:
1. Calculate the distance between Cat A and the mouse: `abs(z-x)`
2. Calculate the distance between Cat B and the mouse: `abs(z-y)`
3. Compare the distances:
   - If Cat A is closer, return "Cat A"
   - If Cat B is closer, return "Cat B"
   - If distances are equal, return "Mouse C"

## Time Complexity
O(1) - Only performing simple arithmetic operations.

## Space Complexity
O(1) - Only using a few variables.
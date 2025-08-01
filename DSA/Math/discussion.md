## kangaroo_jump
- I really liked this one as it shows how cleanly we can use math to avoid loops. I started by forming an equation using n jumps: x1 + v1*n = x2 + v2*n Rearranged it: (v1 - v2)*n = x2 - x1 So, n = (x2 - x1) / (v1 - v2) Since n is a number of jumps, it must be a non-negative integer. So (x2 - x1) % (v1 - v2) must be 0 and result should be ≥ 0.

## sherlock_and_squares
- First I understood that perfect squares are like n*n where n is an integer. So I tried brute-force by checking each number using sqrt and floor. Then I realized we can use math directly: Total perfect squares from ceil(sqrt(a)) to floor(sqrt(b)).

## find_digits
- Straightforward digit analysis — I took each digit and checked if it divides the number. Ignored zeroes to avoid divide-by-zero errors.

## viral_advertising
- This is like a chain-reaction growth. I kept track of how many like it each day and used that to get new viewers.

## chocolate_feast
- First I calculated how many chocolates I could buy directly. Then kept exchanging wrappers for extra chocolates until I couldn't anymore.

## angry_professor
- Simple counting problem. I just counted how many came on or before 0.

## utopian_tree_growth
- This was fun — I tracked growth by checking if it's an odd or even cycle. Odd → double, Even → add 1

## cat_and_mouse
- This problem involves determining which cat reaches the mouse first based on their positions on a number line.
- All animals move at the same speed, and the mouse stays still.
- Solution approach:
  1. Calculate the distance between Cat A and the mouse: abs(z-x)
  2. Calculate the distance between Cat B and the mouse: abs(z-y)
  3. Compare the distances:
     - If Cat A is closer, return "Cat A"
     - If Cat B is closer, return "Cat B"
     - If distances are equal, return "Mouse C"
- Time complexity: O(1) - Only performing simple arithmetic operations
- Space complexity: O(1) - Only using a few variables
## kangaroo_jump
- Notes: I really liked this one as it shows how cleanly we can use math to avoid loops. I started by forming an equation using n jumps: x1 + v1*n = x2 + v2*n Rearranged it: (v1 - v2)*n = x2 - x1 So, n = (x2 - x1) / (v1 - v2) Since n is a number of jumps, it must be a non-negative integer. So (x2 - x1) % (v1 - v2) must be 0 and result should be ≥ 0.

## sherlock_and_squares
- Notes: First I understood that perfect squares are like n*n where n is an integer. So I tried brute-force by checking each number using sqrt and floor. Then I realized we can use math directly: Total perfect squares from ceil(sqrt(a)) to floor(sqrt(b)).

## find_digits
- Notes: Straightforward digit analysis — I took each digit and checked if it divides the number. Ignored zeroes to avoid divide-by-zero errors.

## viral_advertising
- Notes: This is like a chain-reaction growth. I kept track of how many like it each day and used that to get new viewers.

## chocolate_feast
- Notes: First I calculated how many chocolates I could buy directly. Then kept exchanging wrappers for extra chocolates until I couldn't anymore.

## angry_professor
- Notes: Simple counting problem. I just counted how many came on or before 0.

## utopian_tree_growth
- Notes: This was fun — I tracked growth by checking if it's an odd or even cycle. Odd → double, Even → add 1
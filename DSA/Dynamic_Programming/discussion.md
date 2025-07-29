# Dynamic Programming Discussion

## Climbing Stairs
You are climbing a staircase. It takes n steps to reach the top. You can either climb 1 or 2 steps at a time. How many distinct ways can you climb to the top?

This is a classic dynamic programming problem that follows the Fibonacci sequence. The key insight is that to reach step n, you can come from either step n-1 (by taking 1 step) or step n-2 (by taking 2 steps).

Two recursive implementations were explored:
1. One that returns the count directly
2. One that uses a reference parameter to accumulate the count

For n=15, there are 987 distinct ways to climb to the top, with the base cases being hit 987 times, confirming our intuition that each base case hit represents one distinct path.

## Frog Jump
This problem is a variation of the classic climbing stairs problem. Instead of counting the number of ways to reach the top, we're minimizing the energy cost based on height differences between stairs.

The key insight is that to reach stair i, we can come from either stair i-1 or i-2, and we want to choose the path that minimizes the total energy cost. The energy cost of a jump from stair j to stair i is the absolute difference in their heights.

Two implementations were explored:
1. A recursive approach without memoization (exponential time complexity)
2. A memoized recursive approach (linear time complexity)

The base cases are:
- Cost to reach stair 0 is 0
- Cost to reach stair 1 is the absolute difference between heights[1] and heights[0]

For any other stair i, the minimum cost is:
min(frogJump(i-1) + abs(heights[i] - heights[i-1]), frogJump(i-2) + abs(heights[i] - heights[i-2]))
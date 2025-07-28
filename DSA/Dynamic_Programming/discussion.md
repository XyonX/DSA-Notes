# Dynamic Programming Discussion

## Climbing Stairs
You are climbing a staircase. It takes n steps to reach the top. You can either climb 1 or 2 steps at a time. How many distinct ways can you climb to the top?

This is a classic dynamic programming problem that follows the Fibonacci sequence. The key insight is that to reach step n, you can come from either step n-1 (by taking 1 step) or step n-2 (by taking 2 steps).

Two recursive implementations were explored:
1. One that returns the count directly
2. One that uses a reference parameter to accumulate the count

For n=15, there are 987 distinct ways to climb to the top, with the base cases being hit 987 times, confirming our intuition that each base case hit represents one distinct path.
## Climbing Stairs

### Problem Description
You are climbing a staircase. It takes n steps to reach the top. You can either climb 1 or 2 steps at a time. How many distinct ways can you climb to the top?

### Approach
This is a dynamic programming problem that is similar to the Fibonacci sequence. The key insight is that to reach step n, you can come from either step n-1 (by taking 1 step) or step n-2 (by taking 2 steps).

### Solutions Implemented
1. Recursive solution with counting parameter
2. Alternative recursive solution with void return type

### Observations
- The number of ways to reach step n follows the Fibonacci sequence
- Base cases: 0 steps = 1 way (do nothing), 1 step = 1 way (take 1 step)
- For n=15, there are 987 distinct ways to climb to the top
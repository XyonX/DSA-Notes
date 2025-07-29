# Frog Jump

## Problem Statement
Given a number of stairs and a frog, the frog wants to climb from the 0th stair to the (N-1)th stair. At a time the frog can climb either one or two steps. A height[N] array is also given. Whenever the frog jumps from a stair i to stair j, the energy consumed in the jump is abs(height[i]- height[j]), where abs() means the absolute difference. We need to return the minimum energy that can be used by the frog to jump from stair 0 to stair N-1.

## Approach
This problem is similar to the classic "climbing stairs" problem but with a twist - instead of counting the number of ways to reach the top, we're minimizing the energy cost.

The solution uses dynamic programming with two approaches:
1. Recursive approach without memoization
2. Memoized recursive approach for optimization

## Solution Explanation
- For the base cases:
  - If we're at stair 0, the energy cost is 0
  - If we're at stair 1, the energy cost is the absolute difference between heights[1] and heights[0]
- For any other stair i, we can reach it from either stair i-1 or i-2
- We calculate the cost for both paths and return the minimum:
  - Cost from i-1: frogJump(i-1, height) + abs(height[i] - height[i-1])
  - Cost from i-2: frogJump(i-2, height) + abs(height[i] - height[i-2])

## Time and Space Complexity
- Time Complexity: O(2^n) for the recursive approach, O(n) for the memoized approach
- Space Complexity: O(n) for the memoized approach due to the dp array

## Known Issues
1. There's a syntax error in the memoized version - missing semicolon after `min(costLeft,costRight)`
2. The function signature for the memoized version has a typo: `vetor<int>& dp` should be `vector<int>& dp`
3. The main function doesn't actually test the implementation
4. The code has several spelling and grammar errors in comments

## LeetCode Link
This problem is similar to [Frog Jump on LeetCode](https://leetcode.com/problems/frog-jump/), though the specific variant with energy costs is not directly available.
# Sort Colors (Dutch National Flag) - Attempted

Status: attempted

Notes:
- Approach: three pointers (l, m, r). Swap 0s to left, 2s to right, 1s skip.
- Known Issues in code:
  - Uses assignment `el=2` instead of comparison `el==2`.
  - After swapping with `r`, `m` should not increment, but loop condition and edge-handling need careful check to avoid infinite loop only if `arr[m]` becomes 2 again.
- Time: O(n), Space: O(1).

LeetCode: https://leetcode.com/problems/sort-colors/

# Container With Most Water - Attempted

Status: attempted

Notes:
- Intent: compute max area between two vertical lines. Correct approach is two-pointer from both ends, moving the shorter side.
- Known Issues in attempts:
  - Attempt 1 treats it like a sliding window with running min; doesn't consider distances properly.
  - Attempt 2 has syntax errors (missing semicolons, misuse of std::max, incomplete returns) and incorrect strategy.
- Time target: O(n), Space: O(1) for the optimal approach.

LeetCode: https://leetcode.com/problems/container-with-most-water/

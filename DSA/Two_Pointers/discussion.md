## container_with_most_water

- Goal: Maximize area formed by two lines and the x-axis. Optimal: two pointers at ends; move the side with smaller height to potentially find a taller line while width shrinks.
- Current attempts captured as-is for learning:
  - Attempt 1: Treats it like maintaining a running min and length -> fails to account for variable width via both ends.
  - Attempt 2: Tries prefix/suffix maxima with several syntax errors and incomplete logic.

[LeetCode: Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

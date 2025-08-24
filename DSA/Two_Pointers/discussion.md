## container_with_most_water

- Goal: Maximize area formed by two lines and the x-axis. Optimal: two pointers at ends; move the side with smaller height to potentially find a taller line while width shrinks.
- Solution: Uses two-pointer technique with O(n) time complexity and O(1) space complexity.
  - Initialize pointers at both ends of the array
  - Calculate area at each step and keep track of maximum
  - Move the pointer pointing to the shorter line inward
  - Continue until pointers meet
- Key insight: Moving the taller line inward will never increase the area, but moving the shorter line might find a taller line that results in a larger area despite the reduced width.

[LeetCode: Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
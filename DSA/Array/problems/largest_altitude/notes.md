### Largest Altitude

**Problem**: Given an array `gain` of integers where `gain[i]` is the net gain in altitude between points `i` and `i+1`, return the highest altitude reached.

**Solution**: 
- Initialize `maxAlt` and `alt` to 0 (starting altitude)
- Iterate through the gain array, accumulating the altitude
- Update `maxAlt` with the maximum altitude encountered
- Return `maxAlt`

**Time Complexity**: O(n) - We traverse the array once
**Space Complexity**: O(1) - We only use a few variables

**Practice Count**: 1

**LeetCode Link**: https://leetcode.com/problems/find-the-highest-altitude/

### Notes
- This is similar to running sum but focuses on finding the maximum value
- The starting altitude is 0, which is important to consider
- Simple and efficient solution with constant space complexity
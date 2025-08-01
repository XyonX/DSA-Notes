# Counting Valleys

## Problem Description
Given a hike of steps represented by a string path of 'U' (uphill) and 'D' (downhill), count how many valleys the hiker walked through. A valley is a sequence of consecutive steps below sea level, starting with a 'D' from sea level and ending with a 'U' back to sea level.

## Constraints
- 1 <= steps <= 10^6
- path.length == steps
- path contains only 'U' and 'D' characters

## Solution Approach
The solution uses a simple counting approach:
1. Track the current altitude (starting at sea level = 0)
2. For each step:
   - If 'U' (uphill): increment altitude
   - If 'D' (downhill): decrement altitude
3. Only increment the valley count when we return to sea level (altitude = 0) after being below sea level

## Key Insight
A valley is only completed when we return to sea level from below sea level. We increment the valley counter only when we step up to sea level (altitude becomes 0) after having gone below it.
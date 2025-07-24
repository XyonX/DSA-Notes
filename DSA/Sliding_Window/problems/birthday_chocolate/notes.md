# Birthday Chocolate Problem

## Problem Description
Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.

Lily decides to share a contiguous segment of the bar selected such that:
- The length of the segment matches Ron's birth month, and,
- The sum of the integers on the squares is equal to his birth day.

Determine how many ways she can divide the chocolate.

## Solution Approach
This problem was solved using the sliding window technique. It was the first unknown problem that was solved using sliding window without being told it could be solved this way, which was quite satisfying.

## Implementation Details
- Uses two pointers (l and r) to maintain a sliding window
- Expands the window by moving the right pointer
- Contracts the window when the sum exceeds the target by moving the left pointer
- Counts valid segments where sum equals target and length matches the month

## Known Issues
None - solution appears correct.
# Height (Max Depth) of Binary Tree

Status: solved

- Height = number of nodes along the longest path from root to a leaf (LeetCode 104).
- Recurrence: h(T) = 1 + max(h(TL), h(TR)); base: null->0.
- Time: O(n), Space: O(h) recursion stack.

LeetCode reference: https://leetcode.com/problems/maximum-depth-of-binary-tree/
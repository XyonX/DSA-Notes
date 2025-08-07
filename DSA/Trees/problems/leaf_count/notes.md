# Count Leaf Nodes

Status: solved

- Count nodes with no children using recursion.
- Recurrence: leaves(T) = leaves(TL) + leaves(TR); base cases: null->0, leaf->1.
- Time: O(n), Space: O(h) recursion stack.

LeetCode reference: Similar to leaf-counting tasks used in traversal practice; no direct dedicated problem, but related to many tree basics.
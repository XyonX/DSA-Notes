# Lowest Common Ancestor in Binary Tree

## Problem Statement
Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

## Approach
The LCA of two nodes n1 and n2 in a binary tree is the lowest node that has both n1 and n2 as descendants (where we allow a node to be a descendant of itself).

## Solution Explanation
- The `lca` function recursively searches for the nodes n1 and n2.
- If the current node is null or matches either n1 or n2, it returns the current node.
- It recursively searches the left and right subtrees.
- If both left and right searches return non-null values, the current node is the LCA.
- If only one search returns a non-null value, that value is the LCA.

## Time Complexity
O(N) where N is the number of nodes in the tree, as we might visit all nodes in the worst case.

## Space Complexity
O(H) where H is the height of the tree, due to the recursion stack.
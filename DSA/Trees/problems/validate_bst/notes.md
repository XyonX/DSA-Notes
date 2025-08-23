# Validate Binary Search Tree

## Problem Statement
Given the root of a binary tree, determine if it is a valid binary search tree (BST).

## Approach
A valid BST is defined such that:
- The left subtree of a node contains only nodes with keys less than the node's key.
- The right subtree of a node contains only nodes with keys greater than the node's key.
- Both the left and right subtrees must also be binary search trees.

## Solution Explanation
- The `isBst` function checks if a tree is a valid BST by ensuring each node's value is within a valid range.
- The range is initially set to (LONG_MIN, LONG_MAX) for the root.
- For each node, we update the range for its children:
  - Left child's range becomes (min, node->data)
  - Right child's range becomes (node->data, max)
- The `testIsBST` function demonstrates the validation with examples of valid and invalid BSTs.

## Time Complexity
O(N) where N is the number of nodes in the tree, as we visit each node once.

## Space Complexity
O(H) where H is the height of the tree, due to the recursion stack.
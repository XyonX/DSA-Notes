# Diameter of Binary Tree

## Problem Statement
The diameter of a binary tree is the length of the longest path between any two nodes in the tree. This path may or may not pass through the root.

## Approach
The diameter of a binary tree can be calculated by finding the height of the left and right subtrees for each node and updating the maximum diameter found so far. For each node, the diameter is the sum of the heights of the left and right subtrees.

## Solution Explanation
- The `height` function calculates the height of a subtree and updates the maximum diameter.
- The `treeDia` function initializes the diameter to 0 and calls the `height` function to compute the diameter.

## Time Complexity
O(N) where N is the number of nodes in the tree, as we visit each node once.

## Space Complexity
O(H) where H is the height of the tree, due to the recursion stack.
# Level Order Traversal of Binary Tree

## Problem Statement
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

## Solution Approach
This solution uses a breadth-first search (BFS) approach with a queue to traverse the tree level by level:
1. Initialize a queue and add the root node to it
2. While the queue is not empty:
   - Get the current size of the queue (number of nodes at current level)
   - Process all nodes at the current level
   - Add their children to the queue for the next level
   - Store the values of nodes at current level in a vector
3. Return the result containing vectors for each level

## Time and Space Complexity
- Time Complexity: O(n) where n is the number of nodes in the tree
- Space Complexity: O(w) where w is the maximum width of the tree (for the queue)

## Code Explanation
The code implements a level order traversal using a queue:
- A `node` struct represents each node in the binary tree
- The `levelOrder` function performs the traversal using BFS
- The main function demonstrates the implementation with a sample tree

## Known Issues
- The `node` constructor doesn't initialize the `left` and `right` pointers to `nullptr`, which could lead to undefined behavior
- Memory allocated with `new` is not freed, causing memory leaks
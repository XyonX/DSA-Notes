# DFS Traversal

## Problem Description
Implementation of Depth-First Search (DFS) traversal for a directed graph. The code demonstrates:
1. Simple DFS that prints each node when first visited
2. DFS from a chosen start node
3. DFS over the whole graph to cover disconnected components

## Key Concepts
- DFS explores as far as possible along each branch before backtracking
- Uses a visited array to avoid revisiting nodes
- Can be implemented recursively (as shown) or iteratively using a stack
- Time complexity: O(V + E) where V is vertices and E is edges
- Space complexity: O(V) for the visited array and recursion stack

## Code Explanation
The implementation includes:
- A recursive `dfs` function that visits nodes and their neighbors
- An example directed graph with two components (one with a cycle)
- Two demonstrations:
  1. DFS from a specific starting node (0)
  2. Complete graph traversal covering all disconnected components

## Notes
- This is a DIRECTED graph implementation. For undirected graphs, add edges both ways.
- The order of traversal can vary based on the ordering of adjacency lists.
- The example graph includes a cycle (2 -> 4 -> 5 -> 2) which is correctly handled by the visited array.
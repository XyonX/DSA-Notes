# Number of Provinces

## Problem Description
Given a graph represented as an adjacency list, count the number of connected components (provinces). This problem is equivalent to finding the number of connected components in a graph or the number of islands in a 2D grid.

## Key Concepts
- Uses Depth-First Search (DFS) to traverse each connected component
- Maintains a visited array to track which nodes have been explored
- For each unvisited node, initiate a DFS traversal which will visit all nodes in that component
- Increment the province count each time a new DFS traversal is initiated

## Algorithm
1. Initialize a visited array to track visited nodes
2. Initialize a province counter to 0
3. For each node in the graph:
   - If the node has not been visited:
     - Increment the province counter
     - Perform DFS from this node to visit all nodes in this component
4. Return the province counter

## Time and Space Complexity
- Time Complexity: O(V + E) where V is the number of vertices and E is the number of edges
- Space Complexity: O(V) for the visited array and recursion stack

## Related Problems
- Number of Islands
- Connected Components in Graph
- Find if Path Exists in Graph

## Notes
- This implementation works for directed graphs. For undirected graphs, edges should be added in both directions.
- The problem is similar to the "Connected Components" problem in graph theory.
- The solution can be adapted for adjacency matrix representation with minor modifications.

## LeetCode
https://leetcode.com/problems/number-of-provinces/
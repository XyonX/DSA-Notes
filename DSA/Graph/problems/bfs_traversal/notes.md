# BFS Traversal in Graph

## Problem Statement
Implement Breadth-First Search (BFS) traversal for a graph.

## Solution Approach
BFS traversal uses a queue data structure to visit all nodes level by level. The algorithm:
1. Start from a source node and mark it as visited
2. Add the source node to a queue
3. While the queue is not empty:
   - Dequeue a node and process it
   - Enqueue all unvisited adjacent nodes and mark them as visited

## Code Explanation
The implementation includes:
- `bfs()`: Core BFS function that traverses from a starting node
- `traverse()`: Function that ensures all components of the graph are visited
- Uses adjacency list representation for the graph
- Handles disconnected components by iterating through all nodes

## Time Complexity
- O(V + E) where V is the number of vertices and E is the number of edges

## Space Complexity
- O(V) for the visited array and queue

## Known Issues
1. Minor spelling error in comment: "startting" should be "starting"
2. The parameter `n` in the `bfs` function is not used (should use `n` instead of `adj.size()`)

## Possible Improvements
1. Fix spelling errors in comments
2. Remove unused parameter `n` in `bfs` function
3. Add more comments to explain the code
4. Consider using a more descriptive variable name than `adn` for adjacent nodes
## tree_traversals
- Implemented recursive traversals: preorder (NLR), inorder (LNR), postorder (LRN). Builds a sample tree with nodes 1..7 to demonstrate outputs.
- Improvement ideas: add separators in output, implement iterative versions using stack, and breadth-first (level order) traversal.
- LeetCode links: Binary Tree Inorder Traversal (https://leetcode.com/problems/binary-tree-inorder-traversal/), Preorder (https://leetcode.com/problems/binary-tree-preorder-traversal/), Postorder (https://leetcode.com/problems/binary-tree-postorder-traversal/).

## binary_search_tree
- Implementation of a Binary Search Tree with insert and in-order traversal methods.
- Key properties: left subtree contains only nodes with keys lesser than the node's key, right subtree contains only nodes with keys greater than the node's key.
- Time complexity for search/insert is O(log n) on average, but can degrade to O(n) in worst case (unbalanced tree).
- Possible improvements: implement find/delete methods, add balancing mechanisms, and proper memory management.
- LeetCode link: Validate Binary Search Tree (https://leetcode.com/problems/validate-binary-search-tree/)

## level_order_traversal
- Implementation of level order traversal (BFS) for a binary tree using a queue.
- This approach traverses the tree level by level from left to right.
- Time complexity is O(n) where n is the number of nodes, and space complexity is O(w) where w is the maximum width of the tree.
- Possible improvements: Add proper memory management for dynamically allocated nodes, initialize pointers to nullptr in the node constructor.
- LeetCode link: Binary Tree Level Order Traversal (https://leetcode.com/problems/binary-tree-level-order-traversal/)

## bst_deletion
- Implementation of deletion in a Binary Search Tree. Handles three cases: leaf node, node with one child, and node with two children (using inorder successor).
- The `deleteNode` function recursively searches for the node to delete and then handles the deletion based on the node's children.
- Time complexity is O(log n) on average for a balanced tree, but can be O(n) in the worst case for a skewed tree.
- Possible improvements: Add proper memory management for dynamically allocated nodes, consider iterative implementation to avoid deep recursion.
- LeetCode link: Delete Node in a BST (https://leetcode.com/problems/delete-node-in-a-bst/)

## bst_deletion
- Implementation of deletion in a Binary Search Tree.
- Handles three cases: leaf node, node with one child, and node with two children (using inorder successor).
- Time complexity O(log n) average, O(n) worst case.
- Possible improvements: Add proper memory management for dynamically allocated nodes.
- LeetCode link: Delete Node in a BST (https://leetcode.com/problems/delete-node-in-a-bst/)

## diameter_of_binary_tree
- Calculates the diameter of a binary tree (longest path between any two nodes) using a height function.
- The solution uses a helper function to calculate the height of each subtree while updating the maximum diameter found so far.
- Time complexity is O(n) where n is the number of nodes, as we visit each node once.
- Space complexity is O(h) where h is the height of the tree due to the recursion stack.
- LeetCode link: Diameter of Binary Tree (https://leetcode.com/problems/diameter-of-binary-tree/)

## lowest_common_ancestor
- Finds the lowest common ancestor of two nodes in a binary tree using recursion.
- The solution recursively searches for the nodes and returns the current node if it matches one of the target nodes or if it's the LCA.
- Time complexity is O(n) where n is the number of nodes, as we might visit all nodes in the worst case.
- Space complexity is O(h) where h is the height of the tree due to the recursion stack.
- LeetCode link: Lowest Common Ancestor of a Binary Tree (https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)

## validate_bst
- Validates if a binary tree is a valid binary search tree by checking node values against a valid range.
- The solution uses a helper function that checks if each node's value is within a valid range, which is updated for each child node.
- Time complexity is O(n) where n is the number of nodes, as we visit each node once.
- Space complexity is O(h) where h is the height of the tree due to the recursion stack.
- LeetCode link: Validate Binary Search Tree (https://leetcode.com/problems/validate-binary-search-tree/)

## diameter_of_binary_tree
- Calculates the diameter of a binary tree (longest path between any two nodes) using a height function.
- The approach uses a helper function to calculate the height of each subtree while updating the maximum diameter found so far.
- Time complexity is O(n) where n is the number of nodes, as we visit each node once.
- Space complexity is O(h) where h is the height of the tree due to the recursion stack.
- Possible improvements: Consider an iterative approach to avoid deep recursion in very unbalanced trees.
- LeetCode link: Diameter of Binary Tree (https://leetcode.com/problems/diameter-of-binary-tree/)

## lowest_common_ancestor
- Finds the lowest common ancestor of two nodes in a binary tree using recursion.
- The approach recursively searches for the target nodes and returns the current node if it matches one of the targets or if it's the LCA.
- Time complexity is O(n) where n is the number of nodes, as we might visit all nodes in the worst case.
- Space complexity is O(h) where h is the height of the tree due to the recursion stack.
- Possible improvements: Consider an iterative approach using parent pointers stored in a map.
- LeetCode link: Lowest Common Ancestor of a Binary Tree (https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)

## validate_bst
- Validates if a binary tree is a valid binary search tree by checking node values against a valid range.
- The approach uses a helper function that checks if each node's value is within a valid range, which is updated for each child node.
- Time complexity is O(n) where n is the number of nodes, as we visit each node once.
- Space complexity is O(h) where h is the height of the tree due to the recursion stack.
- Possible improvements: Consider an iterative approach using a stack.
- LeetCode link: Validate Binary Search Tree (https://leetcode.com/problems/validate-binary-search-tree/)
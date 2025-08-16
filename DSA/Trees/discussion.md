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
## BST Deletion

This code implements the deletion operation in a Binary Search Tree (BST).

### Approach

1.  **Search:** The function first searches for the node to be deleted by recursively traversing the tree based on the key value.
2.  **Deletion:** Once the node is found, there are three cases to consider:
    *   **Node with no children (Leaf Node):** Simply remove the node from the tree.
    *   **Node with one child:** Replace the node with its child.
    *   **Node with two children:** Find the inorder successor (the smallest node in the right subtree), replace the node's data with the successor's data, and then delete the successor node.

### Key Functions

*   `deleteNode(Node* root, int key)`: The main function that deletes a node with the given key. It handles all three deletion cases.
*   `minValueNode(Node* root)`: A helper function to find the node with the minimum value in a subtree, used for finding the inorder successor.
*   `inorder(Node* root)`: A helper function for inorder traversal to verify the tree structure before and after deletion.

### Example Usage

The `main` function demonstrates the deletion process by creating a sample BST, printing its inorder traversal, deleting a node (in this case, node with value 2), and then printing the inorder traversal again to show the updated tree.

### Time Complexity

*   **Average Case:** O(log n), where n is the number of nodes in the BST. This occurs when the tree is balanced.
*   **Worst Case:** O(n), when the tree is skewed (essentially a linked list).

### Space Complexity

*   O(h), where h is the height of the tree, due to the recursion stack.
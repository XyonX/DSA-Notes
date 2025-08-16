# Binary Search Tree Implementation

## Overview
This implementation demonstrates a Binary Search Tree (BST) in C++. A BST is a node-based binary tree data structure that has the following properties:
- The left subtree of a node contains only nodes with keys lesser than the node's key
- The right subtree of a node contains only nodes with keys greater than the node's key
- The left and right subtree each must also be a binary search tree
- There must be no duplicate nodes

## Time Complexity
- Search, Insert, Delete: O(log n) on average, O(n) in worst case
- This is an improvement over normal trees where finding an element is O(n)

## Code Explanation

### Node Structure
```cpp
struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
```
This defines a node structure with an integer data value and pointers to left and right children.

### BST Class
```cpp
class BST{
    public:
    node*root;
    
    BST() : root(NULL) {}
    
    node* insert(node**root, int data){
        if(*root ==NULL){
            *root=newNode(data);
            return *root;
        }else if (data <=(*root)->data){
            (*root)->left=insert(&(*root)->left,data);
        }else {
            (*root)->right=insert(&(*root)->right,data);
        }
        return *root;
    }
    
    node* newNode(int val){
        return new node(val);
    }
    
    void traverse(node* n){
        if(n==NULL){
            return;
        }
        traverse(n->left);
        cout<<n->data<< " ";
        traverse(n->right);
    }
};
```

The BST class contains:
- A root pointer to the root node
- A constructor that initializes the root to NULL
- An insert method that recursively inserts nodes according to BST properties
- A newNode helper method to create new nodes
- A traverse method that performs in-order traversal (left-root-right)

### Main Function
```cpp
int main() {
    cout<<"hi"<<endl;
    
    BST bt ;
    bt.insert(&bt.root,15);
    bt.insert(&bt.root,20);
    bt.insert(&bt.root,10);
    bt.traverse(bt.root);
    
    return 0;
}
```

This creates a BST, inserts values 15, 20, and 10, and then traverses the tree to print the values in sorted order.

## Known Issues
1. The `find` method is declared but not implemented
2. The `insert` method uses a double pointer which is unconventional; typically a single pointer or reference is used
3. Memory management (deletion of nodes) is not handled

## Possible Improvements
1. Implement the `find` method
2. Add a destructor to properly clean up memory
3. Implement deletion of nodes
4. Add balancing mechanisms to maintain O(log n) performance
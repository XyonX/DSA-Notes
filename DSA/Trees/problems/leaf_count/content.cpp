// Problem: Count Leaf Nodes in a Binary Tree
// Status: solved
// Notes: Returns number of leaves (nodes with no children). Recurrence: leaves(T) = leaves(TL) + leaves(TR); base: null->0, leaf->1.

#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val): data(val), left(NULL), right(NULL) {}
};

int countLeaves(node* n){
    if(n==NULL) return 0;
    if(n->left==NULL && n->right==NULL) return 1;
    return countLeaves(n->left) + countLeaves(n->right);
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << countLeaves(root) << '\n'; // 4
    return 0;
}
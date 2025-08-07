// Source: recent_codes.txt processed on 2025-08-07
// Status: solved
// Notes: Preorder, Inorder, Postorder traversal implementations; plus leaf count and height.

#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void tree_pre(node* n){
    if(n==NULL) return;
    cout << n->data;
    tree_pre(n->left);
    tree_pre(n->right);
}

void tree_in(node* n){
    if(n==NULL) return;
    tree_in(n->left);
    cout << n->data;
    tree_in(n->right);
}

void tree_po(node* n){
    if(n==NULL) return;
    tree_po(n->left);
    tree_po(n->right);
    cout << n->data;
}

int traverse(node* n){
    if(n==NULL) return 0;
    if(n->left==NULL && n->right==NULL) return 1;
    return traverse(n->left) + traverse(n->right);
}

int numLeafNodes(node* root){
    return traverse(root);
}

int traverse_2(node* root){
    if(root==NULL) return 0;
    int leftHeight = 1 + traverse_2(root->left);
    int rightHeight = 1 + traverse_2(root->right);
    return max(leftHeight, rightHeight);
}

int heightOfTree(node* root){
    return traverse_2(root);
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "pre order traversal output: ";
    tree_pre(root);
    cout << '\n';
    cout << "In order traversal outoput: ";
    tree_in(root);
    cout << '\n';
    cout << "Post order traversal outoput: ";
    tree_po(root);
    cout << '\n';

    cout << "Number of leaf node: " << numLeafNodes(root) << '\n';
    cout << "Hiehgt of tree : " << heightOfTree(root) << '\n';
    return 0;
}
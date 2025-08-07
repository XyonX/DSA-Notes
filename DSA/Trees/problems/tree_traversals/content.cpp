// Problem: Binary Tree Traversals (Preorder, Inorder, Postorder)
// Status: solved
// Notes: Implements recursive traversals only; no extra utilities.

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
    return 0;
}
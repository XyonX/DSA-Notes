// Problem: Height (Max Depth) of Binary Tree
// Status: solved
// Notes: Height defined as number of nodes on the longest path from root to leaf. Equivalent to LeetCode 104.

#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val): data(val), left(NULL), right(NULL) {}
};

int height(node* root){
    if(root==NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << height(root) << '\n'; // 3
    return 0;
}
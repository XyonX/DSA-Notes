#include <bits/stdc++.h>
using namespace std;

// Define the structure of a tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Lowest common ancestor of bt
Node* lca(Node*root, Node*n1,Node*n2){
    //if null we return the null or if we reach any end of the asked node we return that
    if (root ==nullptr || root ==n1 || root ==n2)return root;

    Node* lr = lca(root->left,n1,n2);
    Node* rr = lca(root->right,n1,n2);
    //found right
    
    if(lr==NULL)return rr;
    //found left
    else if(rr ==NULL)return lr;
    //found both
    else return root;
}
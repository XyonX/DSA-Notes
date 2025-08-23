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

int height(Node*root,int & maxDia){
    if (root==NULL)return 0;
    
    int lh=height(root->left,maxDia);
    int rh=height(root->right,maxDia);
    
    maxDia=max(maxDia,lh+rh);
    
    return 1+max(lh,rh);
}

// Diameter of binary tree
int treeDia(Node*root ){
    int td=0;
    height(root,td);
    return td;
}
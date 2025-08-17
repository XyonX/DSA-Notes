// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
    }
};

vector<vector<int>>levelOrder(node*root){
    vector<vector<int>>ans;
    
    if(root==NULL)return ans;
    queue<node*>q;
    q.push(root);
    
    while(!q.empty()){
        int size =q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
            node*n = q.front();
            q.pop();
            if(n-> left!=NULL)q.push(n->left);
            if(n-> right!=NULL)q.push(n->right);
            level.push_back(n->data);
        }
        ans.push_back(level);
        
    }
    return ans;
}

int main() {

// Build tree: 1 → 2,3 → 4,5,6,7
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    vector<vector<int>> result = levelOrder(root);

    // Print level order
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
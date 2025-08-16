// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//binary search tree
//the rule is any new node we insert if its smaller that the root node it goes to the left node if its larger it goes right node
//not only the left node any child node should have smaller value from the root node

//in normal tree the time complexity to find an element is o(n)
//in bst we can do this in o(log n) time complexity as the height is log n


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
    void find(int val){
        
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

int main() {

cout<<"hi"<<endl;

    BST bt ;
    bt.insert(&bt.root,15);
    bt.insert(&bt.root,20);
    bt.insert(&bt.root,10);
    bt.traverse(bt.root);

    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//find inorder succesor 
//the minimum value node from the right sub tree
Node* minValueNode(Node*root){
    Node*temp=root;
    while(temp&& temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
    
}

//function to delete a given note with a key
//return that deleted key

Node* deleteNode(Node*root , int key){
    //base case 
    //the root might be null
    //or the key not found
    if (root==NULL) return NULL;
    
    
    if(key<root->data){
        root->left=deleteNode(root->left,key);
    }else if (key>root->data){
        root->right=deleteNode(root->right,key);
    }
    //this else executes meand the current node the key
    else{
        //edge case one
        //no child is present
        //means leaf node we can simply return
        if(root->left ==NULL && root->right==NULL){
            return NULL;
        }else if(root->right ==NULL){
            Node*temp = root->left;
            delete root;
            return temp;
        }else if(root->left ==NULL){
            Node*temp=root->right;
            delete root;
            return temp;
        } 
        //means both the children are present
        else{
            //Both the child present
            //find the inorder successor of the right sub tree]
            Node*temp=minValueNode(root);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
            return root;
            
            
        }
    }
    return root;
    
    
    
    
    
}

// Helper for inorder traversal (to verify BST before/after)
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
Node* root = new Node(4);
root->left = new Node(2);
root->right = new Node(6);
root->left->left = new Node(1);
root->left->right = new Node(3);
root->right->left = new Node(5);
root->right->right = new Node(7);

    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;

    // Delete a node, e.g., key=2 (node with two children)
    root = deleteNode(root, 2);

    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

node *create (vector<int>arr){
    node*head = new node(0);
    node*temp=head;
    
    for(int i=0;i<arr.size();i++){
        node* n = new node(arr[i]);
        temp->next=n;
        temp=temp->next;
    }
    return head->next;
}
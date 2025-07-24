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

void display(node*head){
    node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
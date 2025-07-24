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

node * mergeTwoSortedLinkedList(node* h1, node* h2){
    
    node* head = new node(0);
    node*temp=head;
    
    node*t1=h1;
    node*t2=h2;
    
    while( t1 && t2){
        
        if(t1->data<t2->data){
            node*n = new node(t1->data);
            temp->next=n;
            temp=temp->next;
            t1=t1->next;
            
        }else{
            node*n = new node(t2->data);
            temp->next=n;
            temp=temp->next;
            t2=t2->next;
        }
    }
    if(t1){
        temp->next=t1;
    }
    if(t2){
        temp->next=t2;
    }
    return head->next;
    
}
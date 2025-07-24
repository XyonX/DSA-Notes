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

node* reverse (node*head){
    node*temp=head;
    node*prev=NULL;
    while(temp){
        node*t=temp->next;
        temp->next=prev;
        prev=temp;
        temp=t;
    }
    return prev;
}
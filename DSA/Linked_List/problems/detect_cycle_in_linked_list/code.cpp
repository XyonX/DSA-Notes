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

bool detectCycle(node*head){
   node* slow =head;
   node* fast =head;
    
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)return true;

    }
    return false;
}
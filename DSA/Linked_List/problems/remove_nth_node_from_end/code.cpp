// Remove Nth Node From End of List
// Uses two-pointer technique with proper edge case handling
void removeNthNodeFromTheEnd(node*& head, int n) {
    // Handle empty list
    if (head == NULL) return;
    
    node* slow = head;
    node* fast = head;
    
    // Move fast pointer n steps ahead
    for (int i = 0; i < n; i++) {
        // If n is larger than list size
        if (fast == NULL) return;
        fast = fast->next;
    }
    
    // If fast is NULL, we need to remove the head node
    if (fast == NULL) {
        node* temp = head;
        head = head->next;
        cout << "Deleted node with value: " << temp->data << endl;
        delete(temp);
        return;
    }
    
    // Move both pointers until fast reaches the last node
    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }
    
    // Remove the nth node from end
    node* temp = slow->next;
    slow->next = slow->next->next;
    cout << "Deleted node with value: " << temp->data << endl;
    delete(temp);
}
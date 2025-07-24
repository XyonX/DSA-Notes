# Reverse Linked List

This function reverses a singly linked list by changing the direction of pointers.

## Implementation Details

- Uses three pointers: temp (current node), prev (previous node), and t (next node)
- Iteratively reverses the links between nodes
- Returns the new head of the reversed list

## Time Complexity
O(n) where n is the number of nodes in the list

## Space Complexity
O(1) as we only use a constant amount of extra space

## Algorithm Steps
1. Initialize prev as NULL and temp as head
2. While temp is not NULL:
   - Store temp->next in t
   - Point temp->next to prev
   - Move prev to temp
   - Move temp to t
3. Return prev as the new head
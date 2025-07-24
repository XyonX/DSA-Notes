# Merge Two Sorted Linked Lists

This function merges two sorted linked lists into a single sorted linked list.

## Implementation Details

- Creates a dummy head node to simplify the merging process
- Uses two pointers to traverse both input lists
- Compares the values of nodes from both lists and adds the smaller one to the result
- Appends any remaining nodes from either list to the result

## Time Complexity
O(m + n) where m and n are the lengths of the two lists

## Space Complexity
O(m + n) for creating new nodes in the merged list

## Algorithm Steps
1. Create a dummy head node and a temp pointer
2. Initialize pointers t1 and t2 to the heads of the input lists
3. While both t1 and t2 are not NULL:
   - Compare t1->data and t2->data
   - Create a new node with the smaller value and add it to the result list
   - Move the corresponding pointer (t1 or t2) forward
   - Move temp forward
4. Append any remaining nodes from t1 or t2 to the result list
5. Return head->next as the head of the merged list
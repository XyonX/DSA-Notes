# Display Linked List

This function prints the elements of a linked list to the console.

## Implementation Details

- Uses a temp pointer to traverse the list from head to tail
- Prints the data of each node followed by a space
- Ends with a newline character

## Time Complexity
O(n) where n is the number of nodes in the list

## Space Complexity
O(1) as we only use a constant amount of extra space

## Algorithm Steps
1. Initialize temp pointer to head
2. While temp is not NULL:
   - Print temp->data followed by a space
   - Move temp to temp->next
3. Print a newline character
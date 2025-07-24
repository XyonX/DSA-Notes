# Detect Cycle in Linked List

This function detects if there is a cycle in a singly linked list using Floyd's Cycle Detection Algorithm (tortoise and hare).

## Implementation Details

- Uses two pointers: slow (moves one step) and fast (moves two steps)
- If there is a cycle, the fast pointer will eventually meet the slow pointer
- If there is no cycle, the fast pointer will reach the end of the list

## Time Complexity
O(n) where n is the number of nodes in the list

## Space Complexity
O(1) as we only use a constant amount of extra space

## Algorithm Steps
1. Initialize both slow and fast pointers to head
2. While fast and fast->next are not NULL:
   - Move slow one step forward
   - Move fast two steps forward
   - If slow and fast meet, return true (cycle detected)
3. If fast reaches the end, return false (no cycle)
# Remove Nth Node From End of List

## Problem Statement
Given the head of a linked list, remove the nth node from the end of the list and return its head.

## Approach
This problem is solved using the two-pointer technique:
1. Move the fast pointer n steps ahead of the slow pointer
2. Then move both pointers together until fast reaches the last node
3. At this point, slow will be pointing to the (n-1)th node from the end
4. Remove the nth node by adjusting the next pointer of the (n-1)th node

## Key Observations
- To remove the nth node from the end, we actually need to reach the (n-1)th node from the end
- The two-pointer technique allows us to do this in a single pass
- Special care must be taken when removing the head node (when n equals the size of the list)

## Edge Cases
1. Empty list - nothing to remove
2. Single node list - removing the head node
3. n larger than the size of the list - invalid input
4. Removing the head node (n equals the size of the list)
5. Removing the last node (n = 1)

## Known Issues
- Need to make the intuition clearer about when to stop the pointers
- Need more practice with handling the edge cases, especially removing the head node
- Should work on making the solution more intuitive and less error-prone

## Time Complexity
O(L) where L is the length of the list

## Space Complexity
O(1) as we only use a constant amount of extra space
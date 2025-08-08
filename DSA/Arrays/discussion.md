## Reverse Every K Elements

### Discussion
1. **In-Place Reversal**:
   - The solution avoids extra space by swapping elements within the list.
   - The `swap` function is reusable for other problems.

2. **Edge Handling**:
   - The `right` pointer is bounded by `len(lst) - 1` to handle sublists smaller than `k`.

3. **Variations**:
   - Can be adapted to reverse alternate sublists or skip certain elements.
   - Similar to problems like "Reverse Nodes in k-Group" in linked lists.
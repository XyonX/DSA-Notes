### Problem: Longest Substring Without Repeating Characters

**LeetCode Link:** [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

This problem is a classic example of the **sliding window** technique. The goal is to find the length of the longest substring that contains no repeating characters.

### Approach: Sliding Window

1.  **Initialization**:
    *   `maxLength`: Stores the maximum length found so far (initialized to 0).
    *   `l`: The left pointer of the sliding window (initialized to 0).
    *   `freqMap`: A hash map to store the most recent index of each character encountered. An array of size 256 could also be used for ASCII characters for slightly better performance.

2.  **Iteration**:
    *   We use a `for` loop with a right pointer `r` to expand the window from left to right.
    *   At each character `s[r]`, we check if it's already in our `freqMap`.

3.  **Shrinking the Window**:
    *   If `s[r]` is found in `freqMap`, it means we have a repeating character. To maintain a window with unique characters, we must shrink it from the left.
    *   The new left pointer `l` should be `max(l, freqMap[s[r]] + 1)`. This is a crucial step:
        *   `freqMap[s[r]] + 1` gives us the index right after the last occurrence of the current character.
        *   We take the `max` with the current `l` to ensure the left pointer only moves forward. This handles cases where a repeating character's last seen index is outside our current valid window (i.e., to the left of `l`).

4.  **Updating Max Length**:
    *   After adjusting the window, the length of the current valid substring is `r - l + 1`.
    *   We update `maxLength = max(maxLength, r - l + 1)`.

5.  **Updating the Frequency Map**:
    *   Finally, we update `freqMap[s[r]] = r` with the current index of the character.

### Complexity

*   **Time Complexity**: O(N), where N is the length of the string. We iterate through the string once.
*   **Space Complexity**: O(min(N, M)), where M is the size of the character set (e.g., 256 for ASCII). In the worst case, all characters are unique, and we store all of them in the map.
# Sliding Window - Discussion

## birthday_chocolate
This problem involves finding the number of ways to divide a chocolate bar based on sum and length constraints. 

The solution uses the sliding window technique with two pointers to efficiently find all valid segments. The approach expands the window by moving the right pointer and contracts it when the sum exceeds the target by moving the left pointer. 

This was a satisfying problem to solve as it was the first time the sliding window technique was applied independently without being told it was the appropriate approach.

## maximum_subarray_sum_size_k
This problem requires finding the maximum sum of any contiguous subarray of a specified size k. 

The solution uses the sliding window technique with careful window size management. The key insight is that in each iteration, we maintain a valid window by immediately shrinking it when it exceeds size k. This ensures that after shrinking, the window size is exactly k, allowing us to check for the maximum sum. 

This approach demonstrates a refined understanding of the sliding window pattern, where window boundaries are managed precisely to maintain the required constraints.
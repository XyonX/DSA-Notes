## find_mode_of_array

- Find the mode of an array.

## variance_of_array

- Find the variance of an array. Known Issues: This problem was not fully implemented. Will do it later.

## kadanes_algorithm

- Find the maximum subarray sum (Kadane’s algorithm).

## min_subarray_sum

- Find the minimum subarray sum.

## max_sum_non_adjacent_elements

- Find the maximum sum subarray with non-adjacent elements. Known Issues: Memoization is not yet implemented for this recursive solution.

## max_subarray_sum_min_length

- Find the subarray with the maximum sum and minimum length.

## min_sum_max_length

- Find the subarray with the minimum sum and maximum length.

## find_subarray_with_given_sum

- This problem, "Subarray Sum Equals K", is a classic array manipulation problem. The goal is to find a contiguous subarray whose elements sum up to a given target value.

There are two common approaches to solving this problem:

1.  **Sliding Window:** This approach is efficient but only works for arrays with all positive numbers. It involves maintaining a "window" of elements and expanding or shrinking it to find the target sum.

2.  **Prefix Sum with Hashmap:** This is a more versatile approach that works for arrays with both positive and negative numbers. It involves calculating the prefix sum at each index and using a hashmap to quickly check if a subarray with the target sum exists.

[LeetCode Problem: Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)

## rotate_array_right

- This code implements a right rotation of an array by `k` positions. It creates a new vector `res` and first adds the last `k` elements of the original array, followed by the first `n-k` elements.

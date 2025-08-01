## find_mode_of_array

- Find the mode of an array.

## variance_of_array

- Find the variance of an array. Known Issues: This problem was not fully implemented. Will do it later.

## kadanes_algorithm

- Find the maximum subarray sum (Kadane's algorithm).

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
- This problem discusses array rotation to the right by `k` positions. Both a brute-force approach and an optimal in-place solution using the reversal algorithm are presented.

**Brute-Force Discussion:**
This method involves creating a new array and copying elements in the desired rotated order. While straightforward, its main drawback is the additional space complexity of O(N), which can be significant for large arrays.

**Optimal Solution (Reversal Algorithm) Discussion:**
This in-place technique is highly efficient. It leverages the property that reversing parts of the array and then the whole array achieves the desired rotation. The three steps (reverse last k, reverse first n-k, reverse whole array) ensure that the elements are moved to their correct positions without requiring extra space. This makes it a preferred solution for competitive programming and real-world scenarios where memory optimization is crucial.

## migratory_birds
- This problem involves finding the most frequently sighted bird type from an array of sightings. The solution uses a frequency map to count occurrences of each bird type, then iterates through the array to find the bird type with the highest frequency. In case of a tie, it returns the smallest id.

## bill_division
- This problem involves calculating the correct share for Anna in a bill split scenario. The solution sums all items except the one Anna didn't eat, divides by 2 to get her correct share, and compares with Brian's calculation. If they match, it outputs "Bon Appetit"; otherwise, it shows the difference.

## sock_merchant
- This problem involves counting pairs of socks with matching colors. The solution uses a frequency map to count occurrences of each sock color, then calculates the number of pairs by dividing each count by 2 and summing the results.

## generate_non_adjacent_subsequences
- This problem involves generating all possible subsequences from an array where no two elements are adjacent in the original array. It demonstrates the use of recursion and backtracking to explore all valid combinations. The solution includes two implementations: one incorrect approach that tries to skip elements at odd indices, and a correct approach that properly handles non-adjacent element selection by skipping the next element when including the current one.

## electronics_shop
- This problem involves finding the maximum sum of one keyboard and one USB drive that doesn't exceed a given budget. The solution uses a brute force approach with some optimizations:
  1. Sort keyboards in descending order and drives in ascending order
  2. For each keyboard, iterate through drives:
     - Calculate the cost of the combination
     - If the cost exceeds the budget, break (since drives are sorted, further drives will also exceed)
     - Keep track of the maximum valid cost found
- Time complexity: O(n*m) in the worst case, where n is the number of keyboards and m is the number of drives
- Space complexity: O(1) - only using a few variables

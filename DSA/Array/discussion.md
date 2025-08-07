## find_mode_of_array

- Find the mode of an array.

## variance_of_array

- Find the variance of an array. Known Issues: This problem was not fully implemented. Will do it later.

## kadanes_algorithm

- Find the maximum subarray sum (Kadane's algorithm).

## sort_colors

- Dutch National Flag problem to sort 0s, 1s, and 2s using three pointers (l, m, r). Current code is an attempted version with a comparison bug (`el=2`) and pointer handling detail after swapping with `r`.

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

## two_sum
- This is a classic array problem where we need to find two numbers in an array that add up to a specific target. The optimal solution uses a hash map to store elements and their indices, allowing us to find the complement in O(1) time. This results in an overall time complexity of O(n) and space complexity of O(n).

[LeetCode Problem: Two Sum](https://leetcode.com/problems/two-sum/)

## three_sum
- This problem extends the Two Sum problem to find triplets that sum to zero. The optimal approach involves sorting the array first and then using a two-pointer technique. For each element, we fix it and use two pointers to find pairs that sum to the negative of the fixed element. Careful handling of duplicates is essential to avoid duplicate triplets in the result.

[LeetCode Problem: Three Sum](https://leetcode.com/problems/3sum/)

## majority_element
- This problem involves finding the majority element in an array, which is defined as the element that appears more than ⌊n/2⌋ times. The solution implements the Boyer-Moore Majority Vote Algorithm, which is an efficient O(n) time and O(1) space approach. The algorithm works by maintaining a candidate for the majority element and a counter, updating them as we iterate through the array.

## battle_of_warriors
- This is a custom variation of the Majority Element problem presented in a story format about warrior clans. The solution uses the same Boyer-Moore Majority Vote Algorithm, where warriors from the same clan unite (increment counter) and warriors from different clans duel and fall (decrement counter). The clan with more than half the warriors will survive all duels.

## max_profit
- This problem, "Best Time to Buy and Sell Stock", is a classic array optimization problem. The goal is to find the maximum profit that can be achieved by buying a stock on one day and selling it on a different day in the future.

Two approaches are commonly used:
1. **Brute Force:** Check all possible buy-sell combinations using nested loops. Time complexity: O(n²).
2. **Greedy Approach:** Keep track of the minimum price seen so far and calculate the maximum profit at each day. Time complexity: O(n). This is the optimal solution implemented in the code.

[LeetCode Problem: Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
## kth_smallest_element
- Discussed O(n log n) sort approach vs O(n log k) heap approach; included typical pitfalls and test coverage.

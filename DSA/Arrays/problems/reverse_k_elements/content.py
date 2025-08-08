'''
Reverse Every K Elements

Given a list of integers and an integer k, reverse every sublist of k elements in the list. If the remaining elements are fewer than k, reverse them as well.

Example: Input: lst = [1, 2, 3, 4, 5, 6], k = 2 → Output: [2, 1, 4, 3, 6, 5]
'''

# Helper function to swap elements in a list
def swap(lst, i, j):
    temp = lst[i]
    lst[i] = lst[j]
    lst[j] = temp

# Function to reverse every sublist of k elements
def revSubListK(lst, k):
    for i in range(0, len(lst), k):
        left = i
        right = min(i + k - 1, len(lst) - 1)  # Handle case where remaining elements < k
        while left < right:
            swap(lst, left, right)
            left += 1
            right -= 1

# Test case
l1 = [1, 2, 3, 4, 5, 6, 7]
revSubListK(l1, 2)
print(l1)  # Output: [2, 1, 4, 3, 6, 5, 7]
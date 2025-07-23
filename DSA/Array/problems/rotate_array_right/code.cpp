#include <vector>
#include <algorithm> // Required for std::reverse

// Brute-force solution (using extra space)
// Time Complexity: O(N)
// Space Complexity: O(N)
std::vector<int> rotateArrayRightBruteForce(std::vector<int> arr, int k) {
    std::vector<int> res;
    int n = arr.size();

    // Handle cases where k is greater than n
    k = k % n;

    for (int i = n - k; i < n; i++) {
        res.push_back(arr[i]);
    }
    for (int i = 0; i < n - k; i++) {
        res.push_back(arr[i]);
    }
    return res;
}

// Optimal solution (in-place using reversal algorithm)
// Time Complexity: O(N)
// Space Complexity: O(1)
void rotateArrayRightOptimal(std::vector<int>& arr, int k) {
    int n = arr.size();

    // Handle cases where k is greater than n
    k = k % n;

    // If k is 0 or n, no rotation is needed
    if (k == 0 || n == 0) {
        return;
    }

    // Step 1: Reverse the last k elements
    // Example: [1, 2, 3, 4, 5], k = 2
    // Reverse [4, 5] -> [5, 4]
    // Array becomes: [1, 2, 3, 5, 4]
    std::reverse(arr.begin() + (n - k), arr.end());

    // Step 2: Reverse the first n-k elements
    // Example: [1, 2, 3, 5, 4]
    // Reverse [1, 2, 3] -> [3, 2, 1]
    // Array becomes: [3, 2, 1, 5, 4]
    std::reverse(arr.begin(), arr.begin() + (n - k));

    // Step 3: Reverse the entire array
    // Example: [3, 2, 1, 5, 4]
    // Reverse [3, 2, 1, 5, 4] -> [4, 5, 1, 2, 3]
    // Array becomes: [4, 5, 1, 2, 3]
    std::reverse(arr.begin(), arr.end());
}

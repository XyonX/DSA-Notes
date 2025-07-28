int maximumSubarraySumSizeK(vector<int> arr, int k) {
    if (arr.size() < k) return -1; // Handle edge case
    
    int sum = 0;
    int maxSum = INT_MIN;
    int l = 0;
    
    for (int r = 0; r < arr.size(); r++) {
        sum += arr[r];
        
        if ((r - l + 1) > k) { // Only shrink when window is too big
            sum -= arr[l];
            l++;
        }
        
        if ((r - l + 1) == k) { // Update max only for valid window size
            maxSum = max(sum, maxSum);
        }
    }
    
    return maxSum;
}
Find the maximum subarray sum (Kadane’s algorithm).
The main logic of Kadane's is to start from the beginning. When the sum becomes less than 0, there is no reason to add that, so we start forming a subarray from scratch. We don't always neglect negative numbers.

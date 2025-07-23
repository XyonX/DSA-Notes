Find the subarray with the maximum sum and minimum length.
This is a Kadane's modification algorithm. We simply create Kadane's, then while updating the sum, we check if we have a new max sum. We simply update it. But if we find a sum same as the previous max, we check if we find a min length for that.

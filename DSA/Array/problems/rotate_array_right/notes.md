This problem focuses on rotating an array to the right by `k` positions.

## Brute-Force Solution

**Approach:**
This solution creates a new array (`res`) and populates it by first taking the last `k` elements of the original array, followed by the first `n-k` elements. This effectively rotates the array to the right.

**Time Complexity:** O(N), where N is the size of the array, as we iterate through the array elements twice.

**Space Complexity:** O(N), as we use an additional array `res` of the same size as the input array.

**Dry Run Example (Brute-Force):**

Input: `arr = [1, 2, 3, 4, 5]`, `k = 2`

1.  `n = 5`, `k = 2`
2.  First loop (`i` from `n-k` to `n-1`): `i` goes from `3` to `4`
    - `res.push_back(arr[3])` -> `res = [4]`
    - `res.push_back(arr[4])` -> `res = [4, 5]`
3.  Second loop (`i` from `0` to `n-k-1`): `i` goes from `0` to `2`
    - `res.push_back(arr[0])` -> `res = [4, 5, 1]`
    - `res.push_back(arr[1])` -> `res = [4, 5, 1, 2]`
    - `res.push_back(arr[2])` -> `res = [4, 5, 1, 2, 3]`
4.  Return `res = [4, 5, 1, 2, 3]`

## Optimal Solution (In-Place using Reversal Algorithm)

**Approach:**
This solution rotates the array in-place using three reversals. This method is highly efficient in terms of space complexity.

1.  **Reverse the last `k` elements**: This brings the elements that should be at the beginning of the rotated array to the front of the segment.
2.  **Reverse the first `n-k` elements**: This correctly orders the elements that will follow the initial `k` elements.
3.  **Reverse the entire array**: This combines the two segments in their final rotated order.

**Time Complexity:** O(N), as we perform three reversals, each taking O(N) time.

**Space Complexity:** O(1), as the rotation is done in-place without using any additional data structures proportional to the input size.

**Dry Run Example (Optimal - Reversal Algorithm):**

Input: `arr = [1, 2, 3, 4, 5]`, `k = 2`

1.  `n = 5`, `k = 2`
2.  **Step 1: Reverse the last `k` elements (from index `n-k` to `n-1`)**
    - `arr` is `[1, 2, 3, 4, 5]`
    - Reverse `[4, 5]`
    - `arr` becomes `[1, 2, 3, 5, 4]`

3.  **Step 2: Reverse the first `n-k` elements (from index `0` to `n-k-1`)**
    - `arr` is `[1, 2, 3, 5, 4]`
    - Reverse `[1, 2, 3]`
    - `arr` becomes `[3, 2, 1, 5, 4]`

4.  **Step 3: Reverse the entire array (from index `0` to `n-1`)**
    - `arr` is `[3, 2, 1, 5, 4]`
    - Reverse `[3, 2, 1, 5, 4]`
    - `arr` becomes `[4, 5, 1, 2, 3]`

**Final Result:** `arr = [4, 5, 1, 2, 3]`

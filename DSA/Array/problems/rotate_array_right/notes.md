This code implements a right rotation of an array by `k` positions. It creates a new vector `res` and first adds the last `k` elements of the original array, followed by the first `n-k` elements.

**Known Issues:**
- This implementation creates a new array, which might not be optimal for very large arrays due to space complexity.
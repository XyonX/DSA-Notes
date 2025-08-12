# Compact Summary of Array Data Structures

## Key Topics
1. **Time Complexity of Divide-and-Conquer (O(log n))**
   - Repeated division by a constant factor (e.g., Binary Search).
   - Derivation: `k = log₂ n` steps to reduce problem size to 1.

2. **Arrays vs Vectors in C++**
   - Raw arrays: Fixed size, pointer decay, manual memory management.
   - `std::vector`: Dynamic resizing, bounds checking, automatic memory management.

3. **Dynamic Resizing of Vectors**
   - Growth strategy: Typically doubles capacity (amortized O(1) `push_back`).
   - Optimization: Use `reserve(n)` to avoid reallocations.

4. **Array Rotation**
   - Optimal time: O(n).
   - Optimal space: O(1) (reversal algorithm).

5. **Kadane's Algorithm**
   - Purpose: Maximum subarray sum.
   - Time: O(n), Space: O(1).

6. **Memory Deallocation in C++**
   - `delete` for single objects, `delete[]` for arrays, `free()` for `malloc`/`calloc`.

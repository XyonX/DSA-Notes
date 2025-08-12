# Detailed Discussion on Array Data Structures

## 1. Divide-and-Conquer (O(log n))
- **Why it works**: Exponential reduction in problem size.
- **Applications**: Binary Search, Fast Exponentiation.

## 2. Arrays vs Vectors in C++
- **Pointer Decay**: Arrays lose size info when passed to functions.
- **Vector Advantages**: Dynamic resizing, bounds checking, STL integration.

## 3. Dynamic Resizing of Vectors
- **Growth Strategy**: Multiplicative (2x or 1.5x) for amortized O(1) operations.
- **Pitfalls**: Confusing `size()` and `capacity()`.

## 4. Array Rotation
- **Reversal Algorithm**: In-place rotation with O(1) space.
- **Steps**: Reverse entire array → Reverse first `k` → Reverse remaining `n-k`.

## 5. Kadane's Algorithm
- **Core Idea**: Track `current_sum` and `max_sum`, reset `current_sum` if negative.
- **Use Case**: Maximum subarray problems.

## 6. Memory Deallocation in C++
- **Rules**:
  - `new` ↔ `delete`
  - `new[]` ↔ `delete[]`
  - `malloc`/`calloc` ↔ `free`
- **Common Errors**: Mismatched deallocation (undefined behavior).
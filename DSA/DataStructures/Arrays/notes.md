# Array Data Structure Notes

## 01: Why Problems That Repeatedly Divide Have `O(log n)` Time Complexity

### Idea
When an algorithm works by **repeatedly dividing a problem size by a constant factor** (commonly `2`), the size of the problem shrinks **exponentially**.  
This means it doesn’t take many steps before the problem size becomes `1`.

---

### Derivation
Let:  
- `n` = initial size of the problem  
- We divide the problem size by `2` each step  
- After `k` steps, the size becomes `n / 2^k`

We stop when the size is `1`:

```
n / 2^k = 1
```

Multiply both sides by `2^k`:

```
n = 2^k
```

Take log base 2:

```
k = log₂ n
```

---

### Conclusion
- The number of steps `k` is proportional to `log n`  
- Base of the log depends on the division factor (base 2 if halving)  
- In **Big-O notation**, the base of the logarithm doesn’t matter, so we write:

```
Time Complexity = O(log n)
```

---

### Examples
- **Binary Search** – repeatedly halves the search range  
- **Tree operations** on balanced binary trees (height ≈ log n)  
- **Fast exponentiation** – halves the exponent each time  

---

**Key takeaway:**  
If each step reduces the problem size by a constant factor, the time complexity is logarithmic: `O(log n)`.

---

## 02: Arrays and Vectors in C++

### Notes on Arrays and Vectors in C++ for Technical Interview Prep

This note summarizes our discussion on arrays in C++, focusing on raw arrays (static/dynamic), pointer decay, common pitfalls, and why `std::vector` is a modern wrapper preferred for day-to-day use and interviews. It's structured for quick future reference: key points first, followed by code examples where relevant. Emphasize practicing these for MCQs and coding rounds—arrays are foundational for data structures like stacks, queues, and matrices.

#### Key Points
- **Raw Arrays Basics**:
  - Declaration: Static (`int arr[3] = {1, 2, 3};` or inferred `int arr[] = {1, 2, 3};`), fixed size. Dynamic (`int* arr = new int[n];`), manual memory management.
  - Access: O(1) via index (`arr[i]`), contiguous memory.
  - Size Calculation: In local scope, `sizeof(arr) / sizeof(arr[0])` gives length (e.g., 3 for `{1,2,3}` assuming 4-byte int). But this fails in functions due to pointer decay.
  - Pitfalls: Out-of-bounds access (undefined behavior), no built-in size or resizing, memory leaks with dynamic arrays (use `delete[] arr;`).

- **Pointer Decay (Tricky Part)**:
  - When passing raw arrays to functions (`void func(int arr[])` or `int* arr`), the array decays to a pointer to the first element (`&arr[0]`).
  - Consequences: Lose size info (`sizeof(arr)` gives pointer size, e.g., 8 bytes on 64-bit), must pass size explicitly. Modifications affect original array.
  - Analogy: Array name (`arr`) is like a linked list's head pointer—points to first element, traverse via pointer arithmetic (`arr[i] == *(arr + i)`).
  - Exception: Pass by reference with fixed size (`int (&arr)[3]`), preserves size but inflexible (rare in interviews).

- **Arrays vs Containers**:
  - Raw arrays are **not containers**; they're low-level memory blocks without metadata (size, capacity).
  - Similar to linked list root: `arr` holds address of first element, but contiguous (fast access) vs non-contiguous (easy insert/delete).

- **`std::vector` as Modern Wrapper**:
  - Internals: Wraps a dynamic array (contiguous memory like raw arrays) but adds safety and features.
  - Advantages: Dynamic resizing (`push_back`, `resize`), stores size (`v.size()`), capacity (`v.capacity()`—doubles when full, amortized O(1) growth), automatic memory management (no `delete[]`), bounds checking (`v.at(i)` throws errors).
  - Passing: As object—by value (copies, O(n), avoid), by reference (`vector<int>&`), or const ref (`const vector<int>&` for read-only). No decay, preserves size.
  - Why Preferred: Avoids pointer decay issues, integrates with STL (e.g., `std::sort(v.begin(), v.end())`), safer for interviews unless "no STL" specified.
  - Relation to Raw Arrays: Access underlying array with `v.data()` (returns `int*`), but rarely needed.

- **Interview Tips**:
  - MCQs: Watch for decay (arrays passed by pointer), complexities (O(1) access, O(n) scan/insert).
  - Coding: Use vectors for convenience; fall back to raw arrays for low-level demos. Handle edges (empty, single element, negatives).
  - Common Problems: Rotate array (reversal algo, O(n) time O(1) space), max subarray (Kadane's O(n)), duplicates (O(1) space if 1-n values: modify array as hash).
  - Vectors in Practice: Use for dynamic needs; raw arrays for fixed-size or C-style compatibility.

- **When to Use What**:
  - Raw Arrays: Embedded systems, performance-critical (no overhead), or when problem requires (e.g., multidimensional).
  - Vectors: Everything else—interviews, production code.

#### Relevant Code Snippets
Here are key examples to illustrate concepts. Copy-paste into an IDE to test.

1. **Sizeof and Pointer Decay Demo**:
   ```cpp
   #include <iostream>
   using namespace std;

   void func(int arr[]) {
       cout << "In func: sizeof(arr) = " << sizeof(arr) << " (pointer size)" << endl;
   }

   int main() {
       int arr[] = {1, 2, 3};
       cout << "In main: sizeof(arr) = " << sizeof(arr) << " (array size)" << endl;
       cout << "Length: " << sizeof(arr) / sizeof(arr[0]) << endl; // 3
       func(arr); // Decays to pointer
       return 0;
   }
   ```
   Output (64-bit):  
   ```
   In main: sizeof(arr) = 12 (array size)
   Length: 3
   In func: sizeof(arr) = 8 (pointer size)
   ```

2. **Passing Raw Array vs Vector**:
   ```cpp
   #include <iostream>
   #include <vector>
   using namespace std;

   void print_array(int arr[], int size) {
       for (int i = 0; i < size; i++) cout << arr[i] << " ";
       cout << endl;
   }

   void print_vector(const vector<int>& v) { // Const ref: efficient, no copy
       for (int x : v) cout << x << " ";
       cout << endl;
   }

   int main() {
       int arr[] = {1, 2, 3};
       vector<int> v = {1, 2, 3};
       print_array(arr, 3); // Need size
       print_vector(v);     // Size built-in
       return 0;
   }
   ```
   Output:  
   ```
   1 2 3 
   1 2 3 
   ```

3. **Vector Dynamic Resizing**:
   ```cpp
   #include <iostream>
   #include <vector>
   using namespace std;

   int main() {
       vector<int> v = {1, 2, 3};
       cout << "Initial size: " << v.size() << ", capacity: " << v.capacity() << endl; // 3, 3 or more
       v.push_back(4); // Resizes if needed
       cout << "After push: size " << v.size() << ", capacity " << v.capacity() << endl; // 4, >=4
       return 0;
   }
   ```

4. **Simple Max Function (Raw vs Vector)**:
   ```cpp
   #include <iostream>
   #include <vector>
   #include <climits> // For INT_MIN
   using namespace std;

   int max_array(int arr[], int size) {
       int max_val = INT_MIN;
       for (int i = 0; i < size; i++) max_val = max(max_val, arr[i]);
       return max_val;
   }

   int max_vector(const vector<int>& v) {
       int max_val = INT_MIN;
       for (int x : v) max_val = max(max_val, x);
       return max_val;
   }

   int main() {
       int arr[] = {1, 5, 3, 8, 2};
       vector<int> v = {1, 5, 3, 8, 2};
       cout << max_array(arr, 5) << endl; // 8
       cout << max_vector(v) << endl;     // 8
       return 0;
   }
   ```

---

## 03: Dynamic Resizing of Vectors in C++

### Notes for Future Reference

**Dynamic Resizing**:
- **When**: On `push_back` or `insert` when `size() == capacity()`.
- **How**: Allocates new contiguous array, copies/moves elements, deallocates old array.
- **Growth**: Typically doubles capacity (e.g., 4 → 8) or uses 1.5x (implementation-dependent). Ensures amortized O(1) `push_back`.
- **Optimization**: Use `reserve(n)` if size is known to avoid reallocations.

**Comparison to Python**:
- Python lists: Hybrid growth (e.g., adds 4, 8, 16...), less predictable, balances memory.
- C++ vectors: Multiplicative growth (2x or 1.5x), prioritizes performance.

**Interview Tips**:
- MCQs: Answer “contiguous array with reallocation” for vector resizing. Know complexities (O(n) for reallocation, amortized O(1) for `push_back`).
- Coding: Use `vector` for dynamic arrays; mention `reserve` for optimization.
- Verbal: Explain doubling strategy, why contiguous (cache), and `size()` vs `capacity()`.

**Pitfalls**:
- Assuming fixed growth (e.g., add 8) like Python—mention implementation dependency.
- Forgetting `reserve` in performance-critical code.
- Confusing `size()` (elements) with `capacity()` (allocated space).

---

## 04: Array Rotation by `k` Positions – Optimal Time and Space Complexity

### Problem
Rotate an array of size `n` by `k` positions (left or right shift).

---

### Time Complexity
- **For loop method**:  
  - Shift elements one by one (or use temporary storage for first `k` elements)  
  - Still requires traversing all `n` elements → **O(n)** time.
- **Reversal algorithm**:  
  - Reverse sections of the array to achieve rotation in-place.  
  - Still requires visiting each element at least once → **O(n)** time.

✅ **Conclusion**: Optimal **time complexity** for rotation is `O(n)` regardless of approach.

---

### Space Complexity
- **Naive method with extra array**:  
  - Store shifted elements in a temporary array → **O(n)** extra space.
- **Reversal algorithm (in-place)**:  
  - Perform the rotation by reversing parts of the array → **O(1)** extra space.

✅ **Conclusion**: Optimal **space complexity** is `O(1)` (using the reversal technique).

---

### Reversal Algorithm Steps (Right Rotation by `k`)
1. Reverse the entire array.
2. Reverse the first `k` elements.
3. Reverse the remaining `n - k` elements.

**Example**  
Array: `[1, 2, 3, 4, 5, 6, 7]`, `k = 3`  
1. Reverse entire array → `[7, 6, 5, 4, 3, 2, 1]`  
2. Reverse first 3 → `[5, 6, 7, 4, 3, 2, 1]`  
3. Reverse remaining 4 → `[5, 6, 7, 1, 2, 3, 4]`

---

**Key takeaway:**  
- **Time complexity**: `O(n)` (cannot be better since every element must be moved).  
- **Optimal space complexity**: `O(1)` (possible using reversal technique).

---

## 05: Kadane's Algorithm – Purpose and Complexity

### Problem
Find the **maximum sum of a contiguous subarray** within a given array of integers.

---

### Purpose
Kadane’s Algorithm efficiently calculates the **maximum subarray sum** in **O(n)** time.

---

### Idea / Approach
- Traverse the array once, keeping track of:
  - **`current_sum`** – sum of the current subarray (reset if it becomes negative)
  - **`max_sum`** – best sum found so far
- If `current_sum` becomes negative, **discard it** (start new subarray from the next element).
- This works because adding a negative sum to any future positive number will only decrease the total.

---

### Steps
1. Initialize:
```
current_sum = 0
max_sum = -∞
```
2. For each element `x` in the array:
   - `current_sum = max(x, current_sum + x)`
   - `max_sum = max(max_sum, current_sum)`
3. Return `max_sum`.

---

### Time Complexity
- **O(n)** – Each element is processed once.
- **O(1)** extra space.

---

**Key takeaway:**  
Kadane’s algorithm finds the **maximum contiguous subarray sum** in linear time by **ignoring negative cumulative sums** and keeping track of the best sum so far.

---

## 06: Memory Deallocation in C++ – `delete` vs `delete[]` vs `free()`

### 1. **When to use `delete`**
- Used to deallocate memory for **a single object** allocated with `new`.
- Example:
  ```cpp
  int* p = new int;
  delete p; // Correct
  ```

---

### 2. **When to use `delete[]`**
- Used to deallocate memory for **an array** allocated with `new[]`.
- Ensures that destructors (if any) are called for **all elements** in the array.
- Example:
  ```cpp
  int* arr = new int[10];
  delete[] arr; // Correct
  ```

---

### 3. **When to use `free()`**
- Used in **C** or C++ for memory allocated with:
  - `malloc()`
  - `calloc()`
  - `realloc()`
- Example:
  ```cpp
  int* ptr = (int*)malloc(10 * sizeof(int));
  free(ptr); // Correct
  ```

---

### ❌ Common Mistakes
- **Using `delete` instead of `delete[]`** for arrays → Undefined behavior.
- **Using `free()` on `new` / `new[]` allocated memory** → Undefined behavior.
- **Doing nothing** → Memory leaks.

---

### Summary Table
| Allocation Method     | Correct Deallocation | Notes                         |
| --------------------- | -------------------- | ----------------------------- |
| `new`                 | `delete`             | For single objects            |
| `new[]`               | `delete[]`           | For arrays, calls destructors |
| `malloc() / calloc()` | `free()`             | C-style memory management     |

---

**Key takeaway:**
- Match `new` → `delete`
- Match `new[]` → `delete[]`
- Match `malloc/calloc/realloc` → `free()`
- Mismatching them causes **undefined behavior** and possible memory leaks.
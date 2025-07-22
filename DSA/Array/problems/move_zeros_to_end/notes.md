This is a basic problem to move all zeros to the end of the array.

### Dry Run and Explanation

The algorithm uses a two-pointer approach to move all non-zero elements to the front of the array in a single pass, effectively pushing all zeros to the end.

- `s` (slow pointer): Marks the position for the next non-zero element.
- `f` (fast pointer): Scans the array to find non-zero elements.

When `arr[f]` is not zero, it's swapped with `arr[s]`, and `s` is incremented.

---

#### Scenario 1: Array with no zeros

- **Initial Array**: `[1, 2, 3, 4, 5]`
- In this case, the `s` and `f` pointers will always be at the same index. The `if(arr[f] != 0)` condition is always true.
- A `swap(arr[i], arr[i])` occurs at each step, which has no effect.
- **Final Array**: `[1, 2, 3, 4, 5]` (The array remains unchanged).

---

#### Scenario 2: Zeros at the beginning

- **Initial Array**: `[0, 0, 1, 2, 3]`
- **`f=0, s=0`**: `arr[0]` is 0. No swap.
- **`f=1, s=0`**: `arr[1]` is 0. No swap.
- **`f=2, s=0`**: `arr[2]` is 1. Swap `arr[0]` and `arr[2]`. `s` becomes 1.
  - Array becomes: `[1, 0, 0, 2, 3]`
- **`f=3, s=1`**: `arr[3]` is 2. Swap `arr[1]` and `arr[3]`. `s` becomes 2.
  - Array becomes: `[1, 2, 0, 0, 3]`
- **`f=4, s=2`**: `arr[4]` is 3. Swap `arr[2]` and `arr[4]`. `s` becomes 3.
  - Array becomes: `[1, 2, 3, 0, 0]`
- **Final Array**: `[1, 2, 3, 0, 0]`

---

#### Scenario 3: Zeros in the middle

- **Initial Array**: `[1, 0, 2, 0, 3]`
- **`f=0, s=0`**: `arr[0]` is 1. Swap `arr[0]` and `arr[0]`. `s` becomes 1.
  - Array remains: `[1, 0, 2, 0, 3]`
- **`f=1, s=1`**: `arr[1]` is 0. No swap.
- **`f=2, s=1`**: `arr[2]` is 2. Swap `arr[1]` and `arr[2]`. `s` becomes 2.
  - Array becomes: `[1, 2, 0, 0, 3]`
- **`f=3, s=2`**: `arr[3]` is 0. No swap.
- **`f=4, s=2`**: `arr[4]` is 3. Swap `arr[2]` and `arr[4]`. `s` becomes 3.
  - Array becomes: `[1, 2, 3, 0, 0]`
- **Final Array**: `[1, 2, 3, 0, 0]`

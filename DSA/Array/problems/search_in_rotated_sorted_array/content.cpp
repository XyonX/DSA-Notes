// Search in Rotated Sorted Array
#include <iostream>
#include <vector>
using namespace std;

/*
Here's the clean intuition you can use to solve "Search in Rotated Sorted Array" without memorizing code.

- What the array looks like
  - Start with a strictly increasing array (no duplicates), then rotate it at some pivot. So it becomes two sorted blocks back-to-back: [big...max][min...smaller].
  - Visually: imagine a sorted circle (clock). Rotation is just choosing a new 12 o'clock.

- Key property you exploit
  - If you take any middle point mid, at least one side (left half or right half) is still perfectly sorted. This is guaranteed by the way rotation works and the absence of duplicates.
  - That's the entire trick: each step, figure out which half is "normal sorted," then decide if the target can live there.

- How to decide which half is sorted
  - Compare the endpoints with mid:
    - If nums[lo] <= nums[mid], the left half [lo..mid] is sorted.
    - Else, the right half [mid..hi] is sorted.
  - Because there are no duplicates, these comparisons are unambiguous.

- How to choose where to go next
  - If left half is sorted:
    - Check if target lies between nums[lo] and nums[mid] (inclusive). If yes, move into the left half; otherwise, go right.
  - If right half is sorted:
    - Check if target lies between nums[mid] and nums[hi] (inclusive). If yes, move into the right half; otherwise, go left.
  - You're just pruning the impossible half each time, like standard binary search, but with an extra "which half is sorted?" check.

- Why this works
  - Rotation preserves two monotonic segments. Splitting at mid always leaves at least one segment intact. If the target isn't in the sorted segment by range check, it must be in the other segment.
  - No duplicates means the sorted/unsorted decision is clear and you never get stuck.

- Complexity
  - Each step halves the search space: O(log n) time, O(1) space.

- Walk through mentally (example)
  - Array: [4,5,6,7,0,1,2], target = 0
    - mid = 7 -> left [4..7] is sorted; 0 isn't in [4..7], so go right.
    - Now you're in [0,1,2]. mid = 1 -> right [1..2] is sorted; 0 isn't in [1..2], so go left.
    - Find 0.
  - The exact indices don't matter; the decisions do: "which half is sorted?" then "is target in its range?"

- Alternative mental model (pivot-first)
  - You can first find the pivot (the smallest element) via binary search, then do a normal binary search in the correct half. This is also O(log n) but two-phase. The single-phase method above is simpler in practice.

- Pitfalls to avoid
  - Off-by-one on the range checks: remember to treat ends inclusively when checking "is target in this sorted half?"
  - Forgetting that equals can happen at edges: if target equals nums[mid], you're done.
  - Infinite loops from not moving lo/hi correctly (maintain a consistent invariant, like closed interval [lo, hi]).

- Variations
  - With duplicates allowed (another common variant), the "which half is sorted" test can become ambiguous (e.g., nums[lo] == nums[mid]). In that case, you sometimes shrink boundaries (e.g., move lo forward) to break ties, which can degrade to O(n) in the worst case. The standard version (no duplicates) stays O(log n).

If you can internalize: "one half is always sorted; check which; then range-check the target to choose the half," you can reconstruct the solution on the spot.
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            // Check if the finding element is in the mid
            if (nums[mid] == target) return mid;
            // Check which side is sorted
            // If the l side is less than mid then left side should be sorted and if the r value is larger than mid then the right side should be sorted
            
            // Left side is sorted
            if (nums[l] <= nums[mid]) {
                // Now as left side is sorted we check if the number belongs to the sorted side
                if (nums[l] <= target && target < nums[mid]) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            // The right side is sorted
            else {
                // Checking if the number belongs to the sorted side
                if (nums[mid] < target && target <= nums[r]) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }
        }
        return -1;
    }
};

static void printVec(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i + 1 < v.size()) cout << ", ";
    }
    cout << "]";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Some quick tests (you can add more)
    struct Test { vector<int> nums; int target; int expected; };
    vector<Test> tests = {
        {{4,5,6,7,0,1,2}, 0, 4},
        {{4,5,6,7,0,1,2}, 3, -1},
        {{1},               0, -1},
        {{1,3},             3,  1},
        {{5,1,3},           5,  0},
        {{6,7,0,1,2,4,5},   4,  5}
    };

    Solution sol;
    for (size_t i = 0; i < tests.size(); ++i) {
        vector<int> nums = tests[i].nums; // copy since function signature is non-const
        int target = tests[i].target;
        int got = sol.search(nums, target);

        cout << "Test " << (i + 1) << ": nums=";
        printVec(tests[i].nums);
        cout << ", target=" << target
             << " -> got=" << got
             << " (expected=" << tests[i].expected << ")"
             << (got == tests[i].expected ? " ✓" : " ✗")
             << "\n";
    }

    return 0;
}
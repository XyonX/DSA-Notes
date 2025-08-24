// Merge Intervals
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

bool compare(const vector<int>& arr1, const vector<int>& arr2) {
    return arr1[0] < arr2[0];
}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        // Edge case to return if empty
        if (intervals.empty()) return {};
        
        // First step is to sort the vector based on starting time
        sort(intervals.begin(), intervals.end(), compare);
        
        // Iterate over all the elements and try to merge with the prev one 
        vector<vector<int>> res;
        vector<int> prev = intervals[0];
        
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= prev[1]) {
                // Merge both the intervals
                // Don't update if they overlap, just update the prev
                // Update prev
                prev[1] = max(prev[1], intervals[i][1]);
                
            }
            else {
                res.push_back(prev);
                prev = intervals[i];
            }
        }
        
        // Push the last accumulated result
        res.push_back(prev);
        return res;
    }
};

// ---------- Helpers for printing and verification ----------

string intervalsToString(const vector<vector<int>>& intervals) {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < intervals.size(); ++i) {
        oss << "[" << intervals[i][0] << "," << intervals[i][1] << "]";
        if (i + 1 < intervals.size()) oss << ",";
    }
    oss << "]";
    return oss.str();
}

bool equalIntervals(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i].size() != 2 || b[i].size() != 2) return false;
        if (a[i][0] != b[i][0] || a[i][1] != b[i][1]) return false;
    }
    return true;
}

struct TestCase {
    string name;
    vector<vector<int>> input;
    vector<vector<int>> expected;
};

void runTests() {
    vector<TestCase> tests = {
        {
            "LeetCode example",
            {{1,3},{2,6},{8,10},{15,18}},
            {{1,6},{8,10},{15,18}}
        },
        {
            "Touching endpoints",
            {{1,4},{4,5}},
            {{1,5}}
        },
        {
            "Nested intervals",
            {{1,10},{2,6},{8,9}},
            {{1,10}}
        },
        {
            "Disjoint intervals",
            {{1,2},{3,4},{5,6}},
            {{1,2},{3,4},{5,6}}
        },
        {
            "Duplicates",
            {{1,3},{1,3}},
            {{1,3}}
        },
        {
            "Single interval",
            {{5,7}},
            {{5,7}}
        },
        {
            "Empty input",
            {},
            {}
        },
        {
            "Unsorted input with small and negative",
            {{5,7},{-2,0},{1,3},{2,4}},
            {{-2,0},{1,4},{5,7}}
        }
    };

    Solution sol;
    int passed = 0;

    for (const auto& tc : tests) {
        vector<vector<int>> in = tc.input; // copy because merge may modify
        vector<vector<int>> out = sol.merge(in);

        bool ok = equalIntervals(out, tc.expected);
        cout << "Test: " << tc.name << "\n";
        cout << "  Input:    " << intervalsToString(tc.input) << "\n";
        cout << "  Output:   " << intervalsToString(out) << "\n";
        cout << "  Expected: " << intervalsToString(tc.expected) << "\n";
        cout << "  Result:   " << (ok ? "PASS" : "FAIL") << "\n\n";
        if (ok) ++passed;
    }

    cout << "Summary: " << passed << " / " << tests.size() << " tests passed.\n";
}

vector<vector<int>> readIntervalsFromStdin() {
    // Input format:
    // n
    // a1 b1
    // a2 b2
    // ...
    // an bn
    //
    // Example:
    // 4
    // 1 3
    // 2 6
    // 8 10
    // 15 18
    int n;
    if (!(cin >> n)) {
        return {};
    }
    vector<vector<int>> intervals;
    intervals.reserve(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        intervals.push_back({a, b});
    }
    return intervals;
}

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // If you pass --stdin, the program reads intervals from stdin and prints merged result.
    // Otherwise, it runs a built-in test suite.
    if (argc > 1 && string(argv[1]) == "--stdin") {
        vector<vector<int>> intervals = readIntervalsFromStdin();
        Solution sol;
        vector<vector<int>> merged = sol.merge(intervals);
        cout << intervalsToString(merged) << "\n";
    } else {
        runTests();
    }

    return 0;
}

/*
Compile:
  g++ -std=c++17 -O2 -Wall -Wextra -pedantic merge_intervals.cpp -o merge_intervals

Run tests:
  ./merge_intervals

Run with custom input (stdin mode):
  ./merge_intervals --stdin
Then type:
  4
  1 3
  2 6
  8 10
  15 18
Output:
  [[1,6],[8,10],[15,18]]
*/
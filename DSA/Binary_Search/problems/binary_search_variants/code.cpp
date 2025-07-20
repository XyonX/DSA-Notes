// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 🧠 What I Learned:
// Binary search is not just a search technique — it's also a tool used 
// as a base in many advanced problems like lower_bound, upper_bound, 
// first/last occurrence, etc.

// 🔍 Standard Binary Search
// I got two key learnings here:
// 1. The mid calculation: Instead of (l + r)/2, I should use `mid = l + (r - l)/2`
//    to avoid overflow. I wasn't clear on this earlier but now I understand it's safer.
// 2. Binary search reduces the range by half each time, very efficient for sorted arrays.

int bs(vector<int> arr, int target) {
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (target > arr[mid]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
}

// ⬇️ Lower Bound
// This is a modified version of binary search to find the first element 
// that is >= target.
// 🔑 I learned this is used in many problems like:
// - First occurrence
// - Insert position in sorted array
// - Finding smallest index with some condition

int lowerBound(vector<int> arr, int target) {
    int l = 0, r = arr.size() - 1;
    int answer = arr.size(); // if not found, return arr.size()

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] >= target) {
            answer = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return answer;
}

// 📝 Insert Position
// Insert position is just the index where we can insert the element
// to keep the array sorted — exactly what lowerBound gives us.
int insertPos(vector<int> arr, int target) {
    return lowerBound(arr, target);
}

// 🔁 First Occurrence
// Since lower bound gives the first index where arr[i] >= target,
// it directly gives us the first occurrence (if the element exists).
int firstOccur(vector<int> arr, int target) {
    return lowerBound(arr, target);
}

// 🔁 Last Occurrence
// For last occurrence, I learned we can use upperBound and subtract 1.
// Because upperBound gives the index of first element > target.
int lastOccur(vector<int> arr, int target) {
    return upperBound(arr, target) - 1;
}

// ⬆️ Upper Bound
// Another variant of binary search.
// It finds the first index where arr[i] > target
// Only small change from lower bound: condition is strictly greater
int upperBound(vector<int> arr, int target) {
    int l = 0, r = arr.size() - 1;
    int answer = arr.size();

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] > target) {
            answer = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return answer;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    cout << "Binary Search Index: " << bs(arr, 7) << endl;
    cout << "Lower Bound Index (77): " << lowerBound(arr, 77) << endl;

    return 0;
}

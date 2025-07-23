// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// 37. Find the subarray with a given sum
// this is the version implemented with sliding window
// this only works when all array elements are positive
// because with negative numbers, the sum might decrease randomly
// and sliding window can't handle that

int subArrayWithGivenSum(vector<int> arr, int target) {
    int l = 0, sum = 0;

    // we move the right pointer to expand the window
    for (int r = 0; r < arr.size(); r++) {
        sum += arr[r];  // add current element to the window sum

        // if sum is too large, we shrink the window from the left
        while (sum > target && l <= r) {
            sum -= arr[l++];
        }

        // if we found the correct sum, just print the subarray
        if (sum == target) {
            for (int j = l; j <= r; j++) cout << arr[j] << " ";
            cout << endl;
            return r - l + 1; // return the length of this subarray
        }
    }

    return -1; // no such subarray found
}



// 37. Find the subarray with a given sum
// this is the prefix sum + hashmap approach
// it works for both positive and negative numbers
// we track the sum at each index, and look if a subarray
// ending here has a matching sum (target) using hashmap

int subArraySum(vector<int> arr, int target) {
    int sum = 0;
    map<int, int> psMap;  // this will store prefix sum -> index

    // we first build the prefix sum map
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        // store only the first occurrence of each sum
        // because we want the longest possible subarray from that point
        if (psMap.find(sum) == psMap.end()) {
            psMap[sum] = i;
        }
    }

    sum = 0; // reset sum to start again
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        int req = sum - target; // we check if some earlier prefix sum equals sum - target

        // if found, it means the subarray from psMap[req] + 1 to i has the required sum
        if (psMap.find(req) != psMap.end()) {
            for (int j = psMap[req] + 1; j <= i; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
            return i - psMap[req];  // length of subarray
        }
    }

    return 0; // fallback, if no subarray found
}



int main() {
    vector<int> v = {1, 2, 3, 7, 5};
    int target = 12;

    // calling the prefix sum version here
    int len = subArraySum(v, target);
    cout << "Length = " << len << "\n";

    return 0;
}
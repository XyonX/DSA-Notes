// Three Sum problem solution
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    // Sort the array first to help with avoiding duplicates
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    
    for (int i = 0; i < nums.size() && nums[i] <= 0; i++) {
        // Skip duplicates for the first element
        if (i > 0 && nums[i] == nums[i-1]) continue;
        
        // Use two pointers approach for the rest
        int left = i + 1;
        int right = nums.size() - 1;
        
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum < 0) {
                left++;
            } else if (sum > 0) {
                right--;
            } else {
                res.push_back({nums[i], nums[left++], nums[right]});
                // Skip duplicates for the second element
                while (left < right && nums[left] == nums[left-1]) left++;
            }
        }
    }
    
    return res;
}
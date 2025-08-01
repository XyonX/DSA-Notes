// Two Sum problem solution
#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> freq;
    
    // First traverse to populate the map
    for(int i=0; i<nums.size(); i++) {
        freq[nums[i]] = i;
    }
    
    // Second traverse to find the complement
    for(int i=0; i<nums.size(); i++) {
        int compliment = target - nums[i];
        if(freq.find(compliment) != freq.end() && freq[compliment] != i) {
            return {i, freq[compliment]};
        }
    }
    
    return {};
}
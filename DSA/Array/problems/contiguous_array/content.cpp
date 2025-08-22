class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        int maxLength=0;
        map<int,int>prefixSum;
        prefixSum[0] = -1;

        for(int i=0;i<nums.size();i++){
           sum += (nums[i] == 1 ? 1 : -1);

            if(prefixSum.find(sum)!=prefixSum.end()){
                maxLength=max(maxLength,i-prefixSum[sum]);
            }
            if(prefixSum.find(sum)==prefixSum.end())
            prefixSum[sum]=i;

        }
        return maxLength;
    }
};
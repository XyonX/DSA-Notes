class Solution {
public:

    vector<int>prefixSum(vector<int>&arr){
        vector<int>res;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            res.push_back(sum);
        }
        return res;
    }
    vector<int>suffixSum(vector<int>&arr){
        int sum=0;
        vector<int>res(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
            sum+=arr[i];
            res[i]=sum;

        }
        return res;
    }
    int pivotIndex(vector<int>& nums) {
        vector<int>pSum=prefixSum(nums);
        vector<int>sSum=suffixSum(nums);
        for(int i=0;i<nums.size();i++){
            if(pSum[i]==sSum[i])return i;
        }
        return -1;
    }
};
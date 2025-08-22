class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long  sum=0;
        map<long long,int>pSumFreq;
        pSumFreq[0] = 1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int comp = sum-k;
            if(pSumFreq.find(comp)!=pSumFreq.end())
            {
                count=count+pSumFreq[comp];
            }

            pSumFreq[sum]++;
        }
        return count;
    }
};
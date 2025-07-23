int minSubarraySum(vector<int>arr){
    int sum=0;
    int minSum=arr[0];
        //forthe starting of the 
    int startIndex=-1;
    int endIndex=-1;
    for(int i=0;i<arr.size();i++){
        if(sum==0){
            startIndex=i;
        }
        sum+=arr[i];
        if(sum<minSum){
            minSum=sum;
            endIndex=i;
        }
        if(sum>0){
            sum=0;
        }
    }
    return minSum;
}

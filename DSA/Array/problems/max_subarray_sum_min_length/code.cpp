int maxSubarraySumOfMinLength(vector<int>arr){
    int sum=0;
    int maxSum =INT_MIN;
    int minLength=INT_MAX;
    int startingIndex=0;
    
    for(int i=0;i<arr.size();i++){
        if(sum==0){
            startingIndex=i;
        }
        sum+=arr[i];
        if(sum>=maxSum){
        
            int length=i-startingIndex+1;
            if(sum>maxSum){
                 maxSum=sum;
                 minLength=length;
            }else{
                maxSum=sum;
                if(length<minLength){
                    minLength=length;
                }
            }
        }
        if(sum<0){
            sum=0;
        }
    }
    
    return minLength;
}

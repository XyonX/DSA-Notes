int minSumMaxLength(vector<int>arr){
    int sum=0;
    int maxLength=0;
    int minSum=INT_MAX;
    int startingIndex=0;
    
    for(int i=0;i<arr.size();i++){
        if(sum==0){
            startingIndex=i;
        }
        sum+=arr[i];
        int length=i-startingIndex+1;
        if(sum<=minSum){
            if(sum<minSum){
                minSum=sum;
                maxLength=length;
            }else{
                minSum=sum;
                if(length>maxLength){
                    maxLength=length;
                }
            }
        }
        if(sum>0){
            sum=0;
        }
    }
    return maxLength;
}

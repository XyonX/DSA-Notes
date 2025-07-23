int kadanes(vector<int>arr){
    int maxSum=0;
    int sum=0;
    //forthe starting of the 
    int startIndex=-1;
    int endIndex=-1;
    for( int i=0;i<arr.size();i++){
        if(sum==0){
            startIndex=i;
        }
        sum+=arr[i];
        
        if(sum>maxSum){
            maxSum=sum;
            endIndex=i;
        }
        
        if(sum<0){
            sum=0;
        }
    }
    return maxSum;
}

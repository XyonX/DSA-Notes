void ss( int i, vector<int>&arr,vector<int>subArr,int sum,int& maxSum){
    if(i>=arr.size()){
        display(subArr);
        cout<<endl;
        if(sum>maxSum){
            maxSum=sum;
        }
        return ;
    }
    //take the elemnt 
    subArr.push_back(arr[i]);
    sum+=arr[i];
    ///move to the next elemnt
    ss(i+1,arr,subArr,sum,maxSum);
    //dont take the elemnt
    //remove the elemnt
    subArr.pop_back();
    sum-=arr[i];
    ss(i+1,arr,subArr,sum,maxSum);
}

vector<int> rotateArrayRight(vector<int>arr,int k ){
    vector<int>res;
    int n = arr.size();

    for(int i=n-k;i<n;i++){
        res.push_back(arr[i]);
     
    }
    for(int i=0;i<n-k;i++){
        res.push_back(arr[i]);
    }
    return res;
}
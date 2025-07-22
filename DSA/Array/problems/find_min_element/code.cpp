
// 03 Find the minimum element in an array.
//basic

int findMin(vector<int>arr){
    int min=INT_MAX;
    for(int i=0;i<arr.size();i++){
        min=arr[i]<min?arr[i]:min;
    }
    return min;
}

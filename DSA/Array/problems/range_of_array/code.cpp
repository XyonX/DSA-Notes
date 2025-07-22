
// 07 Find the range of an array (difference between max and min).

int rangeOfArr(vector<int>arr){
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<arr.size();i++){
        min=arr[i]<min?arr[i]:min;
        max=arr[i]>max?arr[i]:max;
    }
    return max-min;
}

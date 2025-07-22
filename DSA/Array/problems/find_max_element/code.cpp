
// 02 Find the maximum element in an array.
//basic not much to rember
int findMax(vector<int>arr){
    int max=INT_MIN;
    for(int i=0;i<arr.size();i++){
        max = arr[i]>max ?arr[i]:max;
    }
    return max;
}

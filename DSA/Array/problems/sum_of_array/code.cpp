
// 01 Find the sum of all elements in an array.
//basic not much to remember
int arraySum(vector<int>arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return sum;
}

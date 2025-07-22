
//06 Find the average of all elements in an array.
//BASIC
int  findAvg(vector<int>arr){
    if (arr.empty()) return 0;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return sum/arr.size();
}

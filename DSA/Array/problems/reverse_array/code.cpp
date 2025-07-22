
// 05 Reverse an array
//basic
//HOW TO USE INPLACE REVERSE USING SWAP
void reverseArr(vector<int>&arr){
    for(int i=0;i<arr.size()/2;i++){
        swap(arr[i],arr[arr.size()-i-1]);
    }
}

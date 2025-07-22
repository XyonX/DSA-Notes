
// 04 Check if an array contains a specific element.
//basic
bool isContain(vector<int>arr,int target){
    for(int i=0;i<arr.size();i++){
        if(target==arr[i])return true;
    }
    return false;
}

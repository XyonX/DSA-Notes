
// 08 Find the second largest element in an array.
int findSecondLargest(vector<int>arr){
    int largest = INT_MIN;
    int secondLargest=INT_MIN ;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            secondLargest =largest;
            largest=arr[i];
        }
        if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest =arr[i];
        }
        
    }
    if (secondLargest == INT_MIN) return -1; 
    return secondLargest;
    
}

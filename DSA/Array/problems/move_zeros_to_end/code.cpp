
// 10 Move all zeros to the end of the array.
void moveAllZeros(vector<int>&arr){
   int s=0;
   for(int f=0;f<arr.size();f++){
       if(arr[f]!=0){
           swap(arr[s],arr[f]);
           s++;
       }
   }
}

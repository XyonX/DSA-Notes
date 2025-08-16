// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> merge(vector<int>&arr1,vector<int>&arr2){
  int l1=0;
  int l2=0;
  int s1=arr1.size();
  int s2=arr2.size();
  vector<int>res;
  
  while(l1<s1  && l2<s2){
      if(arr1[l1]<arr2[l2] ){
        res.push_back(arr1[l1]);
        l1++;
      }else{
          res.push_back(arr2[l2]);
          l2++;
      }
  }
  
  while(l1<s1){
      res.push_back(arr1[l1]);
      l1++;
  }
  while(l2<s2){
      res.push_back(arr2[l2]);
      l2++;
  }
  return res;
  
}

vector<int> mergeSort( int l, int r, vector<int>&arr){
    if(l==r)return{arr[l]};
    int mid = l + (r - l)/2;
    
    //call for left part 
    vector<int>la = mergeSort(l,mid,arr);
    //callfor irhgt part
    vector<int>ra = mergeSort(mid+1,r,arr);
    
    return merge(la,ra);
}
void display(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int>arr={2,1,6,4,5,8,7,3,9};
    vector<int>sorted=mergeSort(0,arr.size()-1,arr);
    display(sorted);

    return 0;
}
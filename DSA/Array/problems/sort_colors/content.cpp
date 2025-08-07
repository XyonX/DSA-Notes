// Dutch National Flag (Sort 0s, 1s, 2s) - Attempted version as provided
#include <bits/stdc++.h>
using namespace std;

//we use twpo ppoijnter 
//the l ppinter is used to track the leftmost non zero elemnt
//r is ued to track the rightmost non 2 elemnt 
//mid is used to traverse through the arrya
//if we get zero we swap with the let poiint 
//if we get 2 we swap wiht the rihgt buit we dont incremtrn m as the right most already might have 2 so we dont want to end in mid to 2 it can be in 0 or 1 
void sortZOT(vector<int>&arr){
    int l=0;
    int r=arr.size()-1;
    int m=0;
    
    while(m<=r){
        int el=arr[m];
        if(el==0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }else if(el==1){
            m++;
        }else if(el=2){ // BUG: should be '==' and careful with m increment after swapping with r
            swap(arr[r],arr[m]);
            r--;
        }
    }
}

void display(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int>arr={1,2,0,1,2,0,1,2};
    sortZOT(arr);
    display(arr);
    return 0;
}

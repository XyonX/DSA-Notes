#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// out problem is maximum sum of non adjacent element

void display(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// int genSubSet(int i, vector<int>& arr, vector<int> sub) {
//     if (i >= arr.size()) {
//         display(sub); // Show the subset
//         return 0;     // Base case returns a dummy value
//     }
//     sub.push_back(arr[i]);      // Include arr[i]
//     genSubSet(i + 1, arr, sub); // Recursive call 1
//     sub.pop_back();             // Backtrack
//     genSubSet(i + 1, arr, sub); // Recursive call 2
//     return 0;                   // Return a dummy value here too
// }

//nnow weaer supposed to make a change to this we wat to priint only subsequence non adjacent eemnt
//thhis version was not good i tried to implemnt
//thisis incorrret 
int genSubSet(int i, vector<int>& arr, vector<int> sub) {
    if (i >= arr.size()) {
        display(sub); // Show the subset
        return 0;     // Base case returns a dummy value
    }
    //we skip the elent if we are at odd index
    if(i%2 != 0 ){
        genSubSet(i + 1, arr, sub);
    }
    sub.push_back(arr[i]);      // Include arr[i]
    genSubSet(i + 1, arr, sub); // Recursive call 1
    return 0;                   // Return a dummy value here too
}

//we are supposed to do like this
//if we dont pick arr i+1 we can pick the i+2
void genSubSet(int i, const vector<int>& arr, vector<int>& sub) {
    if (i >= arr.size()) {
        display(sub); // Show the subset
        return;
    }
    // Exclude arr[i] and move to next element
    genSubSet(i + 1, arr, sub);
    // Include arr[i] and skip the next element to ensure non-adjacency
    sub.push_back(arr[i]);
    genSubSet(i + 2, arr, sub);
    sub.pop_back(); // Backtrack to explore other possibilities
}

int main() {

    vector<int>arr={1,2,3,4};
    vector<int>sub;
    genSubSet(0,arr,sub);

    return 0;
}
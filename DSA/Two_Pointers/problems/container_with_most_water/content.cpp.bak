// Container With Most Water - Attempted versions as provided (incorrect logic)
#include <bits/stdc++.h>
using namespace std;

class SolutionAttempt1 {
public:
    int maxArea(vector<int>& height) {
        int maxLength=0;
        int length=0;
        int minHeight=height[0];
        int maxArea=0;
        for(int i=1;i<height.size();i++){
            int heightDiff=height[i]-minHeight;
            length++;
            maxLength=max(length,maxLength);
            maxArea=max(maxArea,minHeight*length);
            if(heightDiff<0){
                minHeight=height[i];
                length=0;
            }
        }
        return maxArea;
    }
};

// Partial/incomplete alternative attempt with prefix/suffix helpers (syntax errors kept as-is per instruction)
class SolutionAttempt2 {
public:
    vector<int> prefixMax(vector<int>&arr){
        vector<int>res;
        int maxHeight=0
        for(int  i=0;i<arr.size();i++){
            res.push_back(maxHeight);
            max=max(maxHeight,arr[i]);
        }
        return res;
    }
    vector<int>suffixMax(vector<int>&arr){
        vector<int>res(arr.size(),0);
        int maxHeight=0;
        for(int i=arr.size()-1;i>=0;i--){
            res[i]=maxHeight;
            max=max(maxHeight,arr[i])
        }
    }

    int maxArea(vector<int>& height) {
        int maxWater=0;
        vector<int>pm=prefixMax(height);
        vector<int>sm=suffixMax(height);
        int a
        for(int i=0;i<height.size();i++){
            int leftMax=pm[i]
        }
    }
};

int main(){
    vector<int> h = {1,8,6,2,5,4,8,3,7};
    SolutionAttempt1 s1;
    cout << s1.maxArea(h) << endl;
    return 0;
}

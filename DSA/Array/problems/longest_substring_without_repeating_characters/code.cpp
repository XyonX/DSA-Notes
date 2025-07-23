#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int ssWithouRepeat(std::vector<int>arr){
    if(arr.size()==0)return 0;
    int maxLength=0;
    int l=0;
    std::map<int,int>freqMap;
    for(int r=0;r<arr.size();r++){
        if(freqMap.find(arr[r]) != freqMap.end()){
            l=std::max(l,freqMap[arr[r]]+1);
        }
        
        maxLength=std::max(maxLength,r-l+1);
        freqMap[arr[r]]=r;
    }
    return maxLength;
}

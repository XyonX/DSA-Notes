#include <iostream>
#include <string>
#include <map>
#include <algorithm>

//we can simply use a rray oof size 256 to also store the char but i choose the map for now 
int ssWithouRepat_Strin(std::string s){
    if(s.empty()) return 0;
    int maxLength = 0;
    int l=0;
    std::map<char,int>freqMap;
    for(int r=0; r<s.size();r++){
        if(freqMap.find(s[r]) !=freqMap.end()){
            l=std::max(l,freqMap[s[r]]+1);
        }
        maxLength = std::max(maxLength,r-l+1);
        freqMap[s[r]]=r;
    }
    return maxLength;
}
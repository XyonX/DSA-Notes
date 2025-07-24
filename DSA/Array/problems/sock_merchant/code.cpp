int sockMerchant(int n, vector<int> ar) {
    map<int,int>socksFreq;
    
    for(int i=0;i<ar.size();i++){
        socksFreq[ar[i]]++;
    }
    int numPairs=0;
    
    for(auto it :socksFreq){
        numPairs+= it.second /2;
    }
    return numPairs;
}
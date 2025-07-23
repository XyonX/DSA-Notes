int findMode(vector<int>arr){
    map<int,int>hmp;
    for(int i=0;i<arr.size();i++){
        hmp[arr[i]]++;
    }
    int maxOccur=0;
    int el=0;
    for(int i=0;i<arr.size();i++){
        if(hmp[arr[i]]>maxOccur){
            maxOccur=hmp[arr[i]];
            el=arr[i];
        }
    }
    return el;
}

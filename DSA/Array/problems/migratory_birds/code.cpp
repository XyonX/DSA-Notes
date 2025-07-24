int migratoryBirds(vector<int> arr) {

    map<int,int>birdFreq;
    
    for(int i=0;i<arr.size();i++){
        birdFreq[arr[i]]++;
    }
    
    int maxFrequecy= INT_MIN;
    int id =INT_MAX ;
    
    for( int i=0;i<arr.size(); i++){
        int freq = birdFreq[arr[i]];
        if(freq>maxFrequecy){
            maxFrequecy=freq;
            id=arr[i];
        }else if (freq==maxFrequecy && arr[i] <id){
            id=arr[i];
        }
    }
    return id;
}
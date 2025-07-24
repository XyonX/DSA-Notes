int birthday(vector<int> s, int d, int m) {
    
    //D IS THE TARGET SUM
    //M IS THE LENGTH
    
    int l=0;
    int sum=0;
    int count=0;
    for(int r=0;r<s.size();r++){
        sum+=s[r];
        
        while(sum>d){
            sum-=s[l];
            l++;
        }
        if(sum==d){
            if((r-l+1) ==m)count++;
        }
        
    }
    return count;
}
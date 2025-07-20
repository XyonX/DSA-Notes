bool checkAnagrams(string a, string b){
    
    //base case to check size mismatch
    if(a.size() !=b.size())return false;
    
    vector<int>fA(26,0);
    vector<int>fB(26,0);

    for( int i=0;i<a.size();i++){
        fA[a[i]-'a']++;
        fB[b[i]-'a']++;
    }
    
    for(char c : a){
        if(fA[c-'a'] != fB[c-'a'])return false;
    }
    return true;
}
char firstNonRepeatChar(string s){
    vector<int>arr(26,0);
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    char firstNonRepeating;
    char c=' ';
    for(int i=s.size()-1;i>=0;i--){
        if(arr[s[i]-'a'] ==1)c=s[i];
    }
    return c;
}
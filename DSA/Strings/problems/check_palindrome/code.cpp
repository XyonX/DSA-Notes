//the basic code of palindrome
//i did impkemented first whihc was wrokign for the ony same caps
// later i have learned to use trhe tolower to make it work for any case 
bool isPalindrome(string s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        if(tolower(s[i])!= tolower(s[n-i-1]))return false;
    }
    return true;
}

//i later implemented the recursivce code to practicve  my recursion skill
bool isP(int i, string& s){
    
    if(i>s.size()/2){
        return true;
    }
    if(tolower(s[i])!= tolower(s[s.size()-i-1]))return false;
    return isP(i+1,s);
}
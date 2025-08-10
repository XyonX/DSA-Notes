const char* determine_color(const char* s) {

 int col = s[0]-'a';
 int row = s[1]-'0';

 if((row+col)%2==0){
    return "White";
 }else{
    return "Black";
 }
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool checkPranthesis(string s){
    
    stack<char>st;
    
    for(int i=0;i<s.size();i++){
        char c=s[i];
        if(c=='(' || c=='[' || c=='{'){
            st.push(c);
        }
        else if(c==')' || c==']' || c=='}'){
            if(st.empty())return false;
            char ob=st.top();
            st.pop();
            if(ob == '(' and c==')')continue;
            else if(ob == '[' and c==']')continue;
            else if(ob == '{' and c=='}')continue;
            else return false;
        }else {
            return false;
        }
    }
    
    if(!st.empty())return false;
    return true;
}


int main() {
cout<<checkPranthesis("({[]})");

    return 0;
}
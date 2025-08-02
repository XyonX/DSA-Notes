// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//the custom atoi fucntion
//the first non space character should be a intiger
//skip the starting spaces
//
int myAtoi1(string s){
    int i=0;
    int n=s.size();
    int num=0;
    int sign=1;
    
    //skip spaces
    while(i<n && s[i] ==' ')
    {
        i++;
    }
    
    //check if we reactr the end
    //means the string is empty or only spaces
    if(i== n)return 0;
    
    //check the first character
    //if its a not integer we return 0
    if(!isdigit(s[i]) && s[i]!='+' && s[i]!='-'){
        return 0;
    }

    //03
    if(s[i] =='-'){
        sign=-1;
        i++;
    }else if(s[i]=='+'){
        i++;
    }
    //now iterate over unntill we hit a non int char
    while(i<n && isdigit(s[i])){
        int digit =s[i]-'0';
        num=num*10+digit;
        i++;
    }
    return sign*num;
}


//this is a recurison versiuon of the same problem
int myAtoi(int i,string s ,bool isNumStarted,int sign, int num){
    if(i>=s.size()){
        if(!isNumStarted)return -1;
        return num*sign;
    }
    if(!isNumStarted){
        if(s[i]==' '){
            return myAtoi(i+1,s,false,1,num);
        }else if(s[i]=='+'){
            return myAtoi(i+1,s,true,1,num);
        }else if(s[i]=='-'){
            return myAtoi(i+1,s,true,-1,num);
        }
        else if(isdigit(s[i])){
            int digit =s[i]-'0';
            num=num*10+digit;
            return myAtoi(i+1,s,true,1,num);
        }
        else{
            return -1;
        }
    }else{
        if(isdigit(s[i])){
            int digit =s[i]-'0';
            num=num*10+digit;
            return myAtoi(i+1,s,true,sign,num);
        }else{
            return num*sign; 
        }
        
    }
}

int main() {
    
cout<<myAtoi(0,"    456abc",false,1,0);
    return 0;
}
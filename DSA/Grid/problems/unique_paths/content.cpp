// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//in how many unquie path we can reach from 0,0 to n,n
//we are not doing dp in this its basic recusrive code
int numGridUniquePath(int i,int j,int n,vector<vector<int>>&grid){
    if(i==n-1 && j==n-1 )return 1;
    if(i>n-1 || j>n-1)return 0;
    
    int bottom=numGridUniquePath(i+1,j,n,grid);
    int right=numGridUniquePath(i,j+1,n,grid);
    
    return bottom+right;
}

//the memoized version of the prev code
int numGUP(int i,int j,int n,vector<vector<int>>&grid,vector<vector<int>>&dp){
    if(i==n-1 && j==n-1 )return 1;
    if(i>n-1 || j>n-1)return 0;
    
    if(dp[i][j] != -1)return dp[i][j];
    
    int bottom=numGUP(i+1,j,n,grid,dp);
    int right=numGUP(i,j+1,n,grid,dp);
    
    return dp[i][j]=bottom+right;
    
}

// probality nexr step is to learnabout hte tabulization methoed or something

int main() {
vector<int> r1={1,2,3,4};
vector<int> r2={5,6,7,8};
vector<int> r3={9,10,11,12};
vector<int> r4={13,14,15,16};

vector<vector<int>>grid;
grid.push_back(r1);
grid.push_back(r2);
grid.push_back(r3);
grid.push_back(r4);

// cout<<"num uniuqw path from 0,0 to 4,4 is :"<<numGridUniquePath(0,0,grid.size(),grid)<<endl;

vector<vector<int>> dp(grid.size(),vector<int>(grid.size(),-1));
cout<<"num uniuqw path from 0,0 to 4,4 is :"<<numGUP(0,0,grid.size(),grid,dp)<<endl;



    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//we are going to solve the from jump problemtoday 
//the problem
/*
Given a number of stairs and a frog, the frog wants to climb from the 0th stair to the (N-1)th stair. At a time the frog can climb either one or two steps. A height[N] array is also given. Whenever the frog jumps from a stair i to stair j, the energy consumed in the jump is abs(height[i]- height[j]), where abs() means the absolute difference. We need to return the minimum energy that can be used by the frog to jump from stair 0 to stair N-1.
*/

//now the problem is similar to the problem of cimb stare 
int nthStare(int i, vector<int>& arr, int& count) {
    if (i == 0 || i == 1) {
        count++;
        return 1;
    }
    return nthStare(i-1, arr, count) + nthStare(i-2, arr, count);
}
// Alternative recursive solution with void return
void nthStare(int i, vector<int>& arr, int& count) {
    if (i == 0 || i == 1) {
        count++;
        return;
    }
    nthStare(i-1, arr, count);
    nthStare(i-2, arr, count);
    return;
}

//


int frogJump(int i, vector<int>& height){
    //we wont be cinsidering memoizatiion yet
    //first implemnt basic probmlem
    //hte the climbinign stare problem is sppose to consider the ways 
    //so for bse case we return way so all the abse case retun way 
    //like to come to 0 we have one option some say its 0 ( i was too)
    //some say basse case for 0 and 1 for both to return 1
    //as to ocme to zero you nee to come from omewhere and as its 1 
    //and to come to 1 you have only one way to come from 0 and this tare hte abse case 
    //and this base case reuturn acumuate the result in the firnal as we summing all the result
    
    //this couuld have also acchived doing a count ref ++ in branch node i did that solve too
    //now in this problem we dont retunr ways rather the cost '
    //so i supose for 0 its 0 and for 1 its not one rather the diff betwen the heigt array 1 index elemnt and 0 indexelemnt '
    //now after abse case we also consider in each callign like s its atop down dp in nth index we can come from either n-1 or n-2 so as we ccalling n-1 and n-2 from the base index so we have a way to add up the cost of going to n-1 or n-2(more accurately coming from them to n)
    //we can add up the cost at the time of callign as teh rereunr will be givign the accumulated pcst and we will be summign it with to reach n-1 or n-2 from n
    if (i==0 ){
        return 0;
    }
    if(i==1 ){
        return abs(height[1]-height[0]);
    }
    
    int costLeft =frogJump(i-1,height)+abs(height[i]-height[i-1]);
    int costRight = frogJump(i-2,height)+abs(height[i]-height[i-2]);
    
    //we return the min of these two
    return min(costLeft,costRight);
    
}

//meomoization verson
int frogJump(int i, vector<int>& height,vector<int>& dp){

    if (i==0 ){
        return 0;
    }

    //before going further we are checkign if we already convered this path
    if(dp[i]!= -1)return dp[i];
    
    int costLeft =frogJump(i-1,height)+abs(height[i]-height[i-1]);
    int costRight = frogJump(i-2,height)+abs(height[i]-height[i-2]);
    
    //we return the min of these two
    int m = min(costLeft,costRight);
    dp[i]=m;
    return m;
    
}

//now try to memoize it 

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";

    return 0;
}
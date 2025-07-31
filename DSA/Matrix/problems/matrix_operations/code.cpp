// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//2d matrix problems


/*
BEGINNING OF 
HELPER FUNCTIONS
*/

vector<vector<int>> gen(int r,int c){
    vector<vector<int>>res(r,vector<int>(c));
    
    int val=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=val;
            val++;
        }
    }
    return res;
    
}

void display(vector<vector<int>>arr){
    int numRow=arr.size();
    int numCol=arr[0].size();
    for(int i=0;i<numRow;i++){
        for(int j=0;j<numCol;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*
END OF 
HELPER FUNCTIONS
*/


//01 Print matrix column-wise
//the basic print
void printRowWise(vector<vector<int>>arr){
    int numRows=arr.size();
    int numCols=arr[0].size();
    
    for(int i=0;i<numRows;i++){
        for(int j=0;j<numCols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


// 01 Print matrix column-wise
//we dont change antything 
// we just run the columnd or inner loop first then the row loop as inner loop
//other wise everythign stays same as row wise printing 
void printColumnWise(vector<vector<int>>arr){
    int numRows=arr.size();
    int numCols=arr[0].size();
    
    for(int j=0;j<numCols;j++){
        for(int i=0;i<numRows;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
}

void diagonalTraversal(vector<vector<int>>arr){
    int numRows=arr.size();
    int numCols=arr[0].size();
    
    if(numRows != numCols){
        cout<<"not a squarte matrix to print diagonal"<< endl;
    }
    int dim=numRows;
    
    for(int i=0;i<dim;i++){
   cout<<arr[i][i]<<" ";
    }
    cout<<endl;
}

int main() {

auto mat = gen(3,3);
cout<<"matrix: "<<endl;
display(mat);
cout<<" row wise: "<<endl;
printRowWise(mat);
cout<<" column wise: "<<endl;
printColumnWise(mat);
cout<<" Diagonal : "<<endl;
diagonalTraversal(mat);

    return 0;
}
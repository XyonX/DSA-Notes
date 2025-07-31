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

//02Spiral order traversal 
//this one is really cool and unqiue for me 
//this image shows how it wokrs https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTLuMzeSkDB9oQcKuklIWepJtSrFYrpWbzDvg&s
//now its basically creating the spiral first we starat wiht the first row then go to bottom right then bottom leftthen till the o top left then till lenth of the next row like this 
//i am nt usre yet how to make thisd alog yet 
//lets give it a try
//one moret hign i am suppose to use mat keyworkd i am using arr for the var name wihc is not appropritate 
 // so i wil be using mat from now on
 //i get some help and idea and get to know to use the boundaries 
 //it can work like we do print the row ->right col->bottom row->left col
 //then we can repeat again and to do this traversal we can use the top left bottmm and right pinter to keep track of 
 //lets implemnet it
 
     //now we can perform those 4 task recursively or iteratively (here probabuly iteratively)
    //i get this logic form somewere i could not think of this You loop until top > bottom || left > right

void printSpiral(vector<vector<int>>mat){
    int numRows=mat.size();
    int numCols =mat[0].size();
    
    int top=0;
    int left =0;
    int right =numCols-1;
    int bottom=numRows-1;
    
    while(top <= bottom && left <= right){
        //print row
        for(int i=left;i<=right;i++){
            cout<<mat[top][i]<<" ";
        }
        top++;
        //print right col
        for(int i=top;i<=bottom;i++){
            cout<<mat[i][right]<<" ";
            
        }
        right--;
        
         // Print bottom row (only if still within bounds)
          if (top <= bottom) {
        for(int i=right;i>=left;i--){
            cout<<mat[bottom][i]<<" ";
            
        }
        bottom--;
         }
           // Print left column (only if still within bounds)
        if (left <= right) {
        for(int i=bottom;i>=top;i--){
            cout<<mat[i][left]<<" ";
            
        }
        left++;
        }
    }
    cout<<endl;
    
    
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


//2 Transpose of Matrix

// 2.1

//this is done taking a  extra space 
vector<vector<int>> transpose1(vector<vector<int>>mat){
    int numRows=mat.size();
    int numCols=mat[0].size();
    vector<vector<int>>res(numRows,vector<int>(numCols));
    
    for(int j=0;j<numCols;j++){
        for(int i=0;i<numRows;i++){
            res[j][i]=mat[i][j];
        }
    }
    return res;
}
//we can solve this in in place
//the trick is we need to swapthe elent 
void transpose(vector<vector<int>>&mat){
    
        int numRows=mat.size();
    int numCols=mat[0].size();
    for(int i=0;i<numRows;i++){
        for(int j=i+1;j<numCols;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
}

// now do a similar problem 
//rotate matrinx or image
//this prooblem can be done either using edxtrax space and doing the rbute 
// i am not going to do i brute iwil do later or just for try
//i am gooing to do the ooptimal one now
//for tis we transpostr the amtrix then do the reverse of hte row
//this rotate the matrix ckicjwiuse 90 degree
void rotateMat(vector<vector<int>>&mat){
    
    int numRows=mat.size();
    int numCols=mat[0].size();
    //transpose the matrix
    for(int i=0;i<numRows;i++){
        for(int j=i+1;j<numCols;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    // //reverse
    for(int i=0;i<numRows;i++){
        for(int j=0;j<numCols/2;j++){
            swap(mat[i][j],mat[i][numCols-j-1]);
        }
    }
    
}



int main() {

auto mat = gen(3,3);
auto mat1 = gen(3,3);
cout<<"matrix: "<<endl;
display(mat);
cout<<" row wise: "<<endl;
printRowWise(mat);
cout<<" column wise: "<<endl;
printColumnWise(mat);
cout<<" Diagonal : "<<endl;
diagonalTraversal(mat);
cout<<" Spiral : "<<endl;
printSpiral(mat);
cout<<"Transpose : "<<endl;
transpose(mat1);
display(mat1);
cout<<"Rotated matrix : "<<endl;
rotateMat(mat);
display(mat);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// Function to print matrix in spiral order
void printSpiral(vector<vector<int>>& mat) {
    int numRows = mat.size();
    int numCols = mat[0].size();
    
    int top = 0;
    int left = 0;
    int right = numCols - 1;
    int bottom = numRows - 1;
    
    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++) {
            cout << mat[top][i] << " ";
        }
        top++;
        
        // Print right column
        for (int i = top; i <= bottom; i++) {
            cout << mat[i][right] << " ";
        }
        right--;
        
        // Print bottom row (only if still within bounds)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }
        
        // Print left column (only if still within bounds)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
    cout << endl;
}

// Helper function to generate a matrix
vector<vector<int>> gen(int r, int c) {
    vector<vector<int>> res(r, vector<int>(c));
    int val = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[i][j] = val++;
        }
    }
    return res;
}

// Helper function to display matrix
void display(vector<vector<int>> arr) {
    int numRow = arr.size();
    int numCol = arr[0].size();
    for (int i = 0; i < numRow; i++) {
        for (int j = 0; j < numCol; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    auto mat = gen(4, 4);
    cout << "Matrix:" << endl;
    display(mat);
    cout << "Spiral Traversal:" << endl;
    printSpiral(mat);
    return 0;
}
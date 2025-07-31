#include <iostream>
#include <vector>
using namespace std;

// Function to rotate matrix 90 degrees clockwise
void rotateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    
    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n/2; j++) {
            swap(mat[i][j], mat[i][n-j-1]);
        }
    }
}

// Helper function to generate a matrix
vector<vector<int>> gen(int n) {
    vector<vector<int>> res(n, vector<int>(n));
    int val = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = val++;
        }
    }
    return res;
}

// Helper function to display matrix
void display(vector<vector<int>> arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    auto mat = gen(4);
    cout << "Original Matrix:" << endl;
    display(mat);
    rotateMatrix(mat);
    cout << "Matrix Rotated 90 Degrees Clockwise:" << endl;
    display(mat);
    return 0;
}
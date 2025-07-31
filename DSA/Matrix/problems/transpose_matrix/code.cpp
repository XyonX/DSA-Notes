#include <iostream>
#include <vector>
using namespace std;

// Function to compute transpose using extra space
vector<vector<int>> transposeWithExtraSpace(vector<vector<int>>& mat) {
    int numRows = mat.size();
    int numCols = mat[0].size();
    vector<vector<int>> result(numCols, vector<int>(numRows));
    
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            result[j][i] = mat[i][j];
        }
    }
    return result;
}

// Function to compute transpose in-place (for square matrices)
void transposeInPlace(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
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
    // Example with extra space transpose
    auto mat1 = gen(3, 4);
    cout << "Original Matrix:" << endl;
    display(mat1);
    auto transposed1 = transposeWithExtraSpace(mat1);
    cout << "Transposed Matrix (Extra Space):" << endl;
    display(transposed1);
    
    // Example with in-place transpose (square matrix)
    auto mat2 = gen(3, 3);
    cout << "\nOriginal Square Matrix:" << endl;
    display(mat2);
    transposeInPlace(mat2);
    cout << "Transposed Square Matrix (In-Place):" << endl;
    display(mat2);
    
    return 0;
}
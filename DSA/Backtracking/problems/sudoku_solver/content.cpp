#include <iostream>
#include <vector>
using namespace std;

// Forward declaration
bool solve(vector<vector<char>>& board);
bool isValid(vector<vector<char>>& board, int row, int col, char c);

void solveSudoku(vector<vector<char>>& board) {
    solve(board);
}

bool solve(vector<vector<char>>& board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            // Check if the cell is empty
            if (board[i][j] == '.') {
                // Try placing digits '1' to '9'
                for (char c = '1'; c <= '9'; c++) {
                    if (isValid(board, i, j, c)) {
                        board[i][j] = c;
                        if (solve(board)) {
                            return true;
                        } else {
                            // Backtrack if the solution is invalid
                            board[i][j] = '.';
                        }
                    }
                }
                // No valid digit found for this cell
                return false;
            }
        }
    }
    // All cells filled successfully
    return true;
}

// Check if placing 'c' at (row, col) is valid
bool isValid(vector<vector<char>>& board, int row, int col, char c) {
    for (int i = 0; i < 9; i++) {
        // Check row
        if (board[row][i] == c) return false;
        // Check column
        if (board[i][col] == c) return false;
        // Check 3x3 subgrid
        if (board[(row / 3) * 3 + i / 3][(col / 3) * 3 + i % 3] == c) return false;
    }
    return true;
}

void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char c : row) {
            cout << c << ' ';
        }
        cout << '\n';
    }
}

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    cout << "Original Sudoku board:\n";
    printBoard(board);

    solveSudoku(board);

    cout << "\nSolved Sudoku board:\n";
    printBoard(board);

    return 0;
}
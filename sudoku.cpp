#include <iostream>
#include <vector>
using namespace std;

class SudokuSolver {
public:

    // Function to check whether placing a number is valid
    bool isValid(int row, int col, vector<vector<char>>& board, char k) {

        // Check row
        for (int x = 0; x < 9; x++) {
            if (board[row][x] == k)
                return false;
        }

        // Check column
        for (int y = 0; y < 9; y++) {
            if (board[y][col] == k)
                return false;
        }

        // Check 3x3 subgrid
        int r = row / 3;
        int c = col / 3;

        for (int i = 3 * r; i < 3 * r + 3; i++) {
            for (int j = 3 * c; j < 3 * c + 3; j++) {
                if (board[i][j] == k)
                    return false;
            }
        }

        return true;
    }

    // Recursive backtracking function
    bool solve(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                // Find empty cell
                if (board[i][j] == '.') {

                    // Try numbers 1 to 9
                    for (char ch = '1'; ch <= '9'; ch++) {

                        if (isValid(i, j, board, ch)) {

                            board[i][j] = ch;

                            // Recursive call
                            if (solve(board))
                                return true;

                            // Backtracking
                            board[i][j] = '.';
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }

    //Print Sudoku board
    void printBoard(vector<vector<char>>& board) {

        cout << "\nSolved Sudoku:\n";

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    void solveSudoku(vector<vector<char>>& board) {
        if (solve(board)) {
            printBoard(board);
        } else {
            cout << "No solution exists.\n";
        }
    }
};

int main() {

    vector<vector<char>> board(9, vector<char>(9));

    cout << "Enter Sudoku Board:\n";
    cout << "Use '.' for empty cells\n\n";

    /*
       Example Input:
       5 3 . . 7 . . . .
       6 . . 1 9 5 . . .
       . 9 8 . . . . 6 .
       8 . . . 6 . . . 3
       4 . . 8 . 3 . . 1
       7 . . . 2 . . . 6
       . 6 . . . . 2 8 .
       . . . 4 1 9 . . 5
       . . . . 8 . . 7 9
    */

    // Taking input
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> board[i][j];
        }
    }

    SudokuSolver obj;

    obj.solveSudoku(board);

    return 0;
}
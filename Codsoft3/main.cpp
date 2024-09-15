#include <iostream>

using namespace std;

// Function to display the game board
void displayBoard(char board[3][3]) {
    cout << " 1 | 2 | 3\n";
    cout << " ---------\n";
    cout << " 4 | 5 | 6\n";
    cout << " ---------\n";
    cout << " 7 | 8 | 9\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) {
                cout << "|";
            }
        }
        cout << "\n";
        if (i < 2) {
            cout << " ---------\n";
        }
    }
}

// Function to check for a win
bool checkWin(char board[3][3], char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Function to check for a draw
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char currentPlayer = 'X';

    while (true) {
        displayBoard(board);
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        int move;
        cin >> move;

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if (board[row][col] != ' ') {
            cout << "Invalid move, try again.\n";
            continue;
        }

        board[row][col] = currentPlayer;

        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        if (checkDraw(board)) {
            displayBoard(board);
            cout << "It's a draw!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    cout << "Play again? (y/n): ";
    char response;
    cin >> response;

    if (response == 'y') {
        main();
    }

    return 0;
}

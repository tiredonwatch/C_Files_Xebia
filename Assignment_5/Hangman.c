#include <stdio.h>
#include<limits.h>

void printBoard(char board[3][3]);
int checkWinner(char board[3][3], char player);
int checkDraw(char board[3][3]);
void playerMove(char board[3][3], char player);
int isValidMove(char board[3][3], int row, int col);

int main() {
    // Initialize the game board with empty spaces
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char currentPlayer = 'O'; // 'O' starts the game

    printf("Welcome to Tic Tac Toe!\n\n");

    // Game loop
    while (1) {
        printf("Player %c's turn:\n", currentPlayer);
        playerMove(board, currentPlayer); // Get the player's move
        printBoard(board); // Display the current board state

        // Check if the current player has won
        if (checkWinner(board, currentPlayer)) {
            printf("Congratulations! Player %c wins!\n", currentPlayer);
            break;
        }

        // Check if the game is a draw
        if (checkDraw(board)) {
            printf("It's a draw!\n");
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'O') ? 'X' : 'O';
    }

    return 0;
}

// Function to display the current state of the board
void printBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|"); // Add a vertical divider between cells
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n"); // Add a horizontal divider between rows
    }
    printf("\n");
}

// Function to check if a player has won
int checkWinner(char board[3][3], char player) {
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || 
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || 
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
    }
    return 0;
}

// Function to check if the game is a draw
int checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') { // If any cell is empty, it's not a draw
                return 0;
            }
        }
    }
    return 1; // All cells are filled, so it's a draw
}

// Function to handle a player's move
void playerMove(char board[3][3], char player) {
    int row, col;

    while (1) {
        // Ask the player for their move
        printf("Enter row (1-3) and column (1-3): ");
        scanf("%d %d", &row, &col);

        // Adjust for 0-based indexing
        row--;
        col--;

        // Check if the move is valid
        if (isValidMove(board, row, col)) {
            board[row][col] = player; // Place the player's marker on the board
            break;
        } else {
            printf("Invalid move! Please try again.\n");
        }
    }
}

// Function to check if a move is valid
int isValidMove(char board[3][3], int row, int col) {
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ');
}

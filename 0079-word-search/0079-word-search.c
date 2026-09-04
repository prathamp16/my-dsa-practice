#include <stdbool.h>

// ✅ Function prototypes
bool dfs(char** board, int boardSize, int* boardColSize,
         char* word, int row, int col, int index);

bool exist(char** board, int boardSize, int* boardColSize, char* word);

// DFS implementation
bool dfs(char** board, int boardSize, int* boardColSize,
         char* word, int row, int col, int index) {

    if (word[index] == '\0')
        return true;

    if (row < 0 || row >= boardSize ||
        col < 0 || col >= boardColSize[row] ||
        board[row][col] != word[index])
        return false;

    char temp = board[row][col];
    board[row][col] = '#';

    bool found =
        dfs(board, boardSize, boardColSize, word, row + 1, col, index + 1) ||
        dfs(board, boardSize, boardColSize, word, row - 1, col, index + 1) ||
        dfs(board, boardSize, boardColSize, word, row, col + 1, index + 1) ||
        dfs(board, boardSize, boardColSize, word, row, col - 1, index + 1);

    board[row][col] = temp;
    return found;
}

// exist() implementation
bool exist(char** board, int boardSize, int* boardColSize, char* word) {
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardColSize[i]; j++) {
            if (dfs(board, boardSize, boardColSize, word, i, j, 0))
                return true;
        }
    }
    return false;
}

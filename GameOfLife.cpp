class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size(), n = board[0].size();
        vector<vector<int>> next(m, vector<int>(n));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int lives = countLiveNeighbors(board, m, n, i, j);
                if (board[i][j] == 1) {
                    if (lives < 2 || lives > 3) {
                        next[i][j] = 0;  // Die
                    } else {
                        next[i][j] = 1;  // Live
                    }
                } else {
                    if (lives == 3) {
                        next[i][j] = 1;  // Reproduce
                    } else {
                        next[i][j] = 0;  // Stay dead
                    }
                }
            }
        }
        
        board = next;
    }

private:
    int countLiveNeighbors(vector<vector<int>>& board, int m, int n, int i, int j) {
        int lives = 0;
        for (int x = max(i - 1, 0); x < min(i + 2, m); x++) {
            for (int y = max(j - 1, 0); y < min(j + 2, n); y++) {
                lives += (x != i || y != j) && board[x][y];
            }
        }
        return lives;
    }
};

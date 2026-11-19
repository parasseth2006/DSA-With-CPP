class Solution {
public:
    vector<int>delrow = {0, -1, 0, 1};
    vector<int>delcol = {-1, 0, 1, 0};
    void dfs(int row, int col, vector<vector<int>>&vis, vector<vector<char>>& board){
        vis[row][col] = 1;
        int n = board.size();
        int m = board[0].size();
        //Check top down left right of current element
        for(int i = 0; i < 4; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && board[nrow][ncol] == 'O'){
                dfs(nrow, ncol, vis, board);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        //Traverse the boundary of the given matrix:
        //Traverse first and last row
        for(int j = 0; j < m; j++){
            //First row
            if(!vis[0][j] && board[0][j] == 'O'){
                dfs(0, j, vis, board);
            }
            //Last row
            if(!vis[n-1][j] && board[n-1][j] == 'O'){
                dfs(n-1, j, vis, board);
            }
        }
        //Traverse first and last column
        for(int i = 0; i < n; i++){
            //First column
            if(!vis[i][0] && board[i][0] == 'O'){
                dfs(i, 0, vis, board);
            }
            //last column
            if(!vis[i][m-1] && board[i][m-1] == 'O'){
                dfs(i, m-1, vis, board);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
};
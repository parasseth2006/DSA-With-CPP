class Solution {
public:
    //BFS Traversal code
    int bfs(int row, int col, vector<vector<int>> &vis ,vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        int cnt = 0;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            cnt++;
            //Traverse in neighbour and mark if its a land
            for(int delrow = -1; delrow<=1; delrow++){
                for(int delcol = -1; delcol <= 1; delcol++){
                    // Skip diagonal directions and current cell
                    if (abs(delrow) + abs(delcol) != 1)
                    continue;

                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1
                    && !vis[nrow][ncol]){
                        vis[nrow][ncol] = 1;
                        q.push({nrow, ncol});
                    }
                }
            }
        }
        return cnt;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxArea = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(!vis[row][col] && grid[row][col] == 1){
                    int cnt = bfs(row,col,vis,grid);
                    maxArea = max(maxArea, cnt);
                }
            }
        }
        return maxArea;
    }
    
};
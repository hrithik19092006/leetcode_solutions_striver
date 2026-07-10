class Solution {
    void solve(int row , int col ,vector<vector<int>>&grid ,vector<vector<int>>&visited , vector<vector<int>>&directions , int &count , int safe_count){
        int n = grid.size();
        int m = grid[0].size();
        if(grid[row][col] == 2){
            if(safe_count == 0){
                count++;
            }
            return ;
        }
        visited[row][col] = 1;
        safe_count --;
        for(int i = 0 ; i < 4 ; i++){
            int new_row = row + directions[i][0];
            int new_col = col + directions[i][1];
            if(new_row >= 0 && new_row < n && new_col < m && new_col >= 0 && visited[new_row][new_col] != 1 && grid[new_row][new_col] != -1){
                solve(new_row , new_col ,grid , visited , directions , count , safe_count);
            }
        }
        visited[row][col] = 0;
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visited(n , vector<int>(m , 0));
        vector<vector<int>>directions = {
            {1 , 0},
            {0 , 1},
            {-1 , 0},
            {0 , -1}
        };
        int safe_count = 1;
        int start_row = 0;
        int start_col = 0;
        for(int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < m ;j++){
                if(grid[i][j] == 0){
                    safe_count++;
                }
                if(grid[i][j] == 1){
                    start_row = i;
                    start_col = j;
                }
            }
        }
        int count = 0 ;
        solve(start_row , start_col , grid , visited , directions , count , safe_count);
        return count;
    }
};
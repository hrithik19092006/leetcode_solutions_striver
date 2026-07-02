class Solution {
    bool find(vector<vector<char>>&board , int row, int col , int index , string& word , vector<vector<int>>&directions ,int n , int m){
        if(index == word.size()){
            return true;
        }
        if(row < 0 || col < 0 || row >= n || col >= m || board[row][col] == '%'){
            return false;
        }
        if(board[row][col] != word[index]){
            return false;
        }
        char temp = board[row][col];
        board[row][col] = '%';


        for(int i = 0 ; i < directions.size() ; i++){
            int new_row = row + directions[i][0];
            int new_col = col + directions[i][1];
            if(find(board , new_row , new_col , index + 1 , word , directions , n , m)){
                return true;
            }
        }
        board[row][col] = temp;
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>directions = {
            {1, 0},
            {-1 , 0},
            {0 , 1},
            {0, -1}
        };
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(board[i][j] == word[0] && find(board , i , j , 0 , word , directions , n , m)){
                    return true;
                }
            }
        }
        return false;
    }
};
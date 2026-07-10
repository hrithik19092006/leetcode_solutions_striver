class Solution {
    bool solve(vector<vector<char>>& board){
        int n = board.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(board[i][j] == '.'){
                    for(char ch = '1' ; ch <= '9' ; ch++){
                        if(isSafe(board , ch , i , j )){
                            board[i][j] = ch;

                            if(solve(board) == true){
                                return true;
                            }

                            else{
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool isSafe(vector<vector<char>>& board , char ch , int row , int col){
        for(int i = 0 ; i < board.size() ; i++){
            if(board[row][i] == ch){
                return false;
            }
            if(board[i][col] == ch){
                return false;
            }
            if(board[3 * (row/3) + i/3][3 * (col/3) + i % 3] == ch){
                return false;
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
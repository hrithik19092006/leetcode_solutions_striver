class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(board[i][j] != '.'){
                    for(int k = 0 ; k < n ; k++){
                        if(k != j && board[i][k] == board[i][j]){
                            return false;
                        }
                        if(k != i && board[k][j] == board[i][j]){
                            return false;
                        }
                        int x = 3 * (i/3) + k /3;
                        int y = 3 * (j/3) + k % 3;
                        if((x != i || y != j) && board[x][y] == board[i][j]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
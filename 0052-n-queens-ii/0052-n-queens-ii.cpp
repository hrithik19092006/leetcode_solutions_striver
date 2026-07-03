class Solution {
    void solve(int col , int &count, vector<string>&board , vector<int>&left , vector<int>&upper , vector <int>&lower , int n){
        if(col == n){
            count ++;
            return;
        }
        for(int row = 0 ;row < n ; row++){
            if(left[row] == 0 && upper[(n-1) +(col - row)] == 0 && lower[row + col] == 0){
                board[row][col] ='Q';
                left[row]= 1;
                upper[(n-1) + (col - row)]= 1;
                lower[row + col] = 1;
                solve(col +1 , count , board , left , upper , lower , n );
                board[row][col] = '.';
                left [row]= 0;
                upper[(n-1) + (col -row)] = 0;
                lower[row + col] = 0;
            }
        }
    }
public:
    int totalNQueens(int n) {
        int count = 0 ;
        vector<string>board(n , string (n , '.'));
        vector<int>left (n , 0 );
        vector<int>upper (2*n - 1 , 0);
        vector<int >lower(2*n - 1 , 0);
        solve(0 , count , board , left ,upper , lower , n);
        return count;
    }
};
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_map<int , vector<int>>mpp;

        //store diagonal elements
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                mpp[i-j].push_back(matrix[i][j]);
            }
        }

        //sort them
        for(auto &it : mpp){
            sort(it.second.begin() , it.second.end());
        }

        //put them back in sorted fashion
        for(int i = n-1 ; i>= 0 ; i--){
            for(int j = m-1 ; j >=0 ; j--){
                matrix[i][j] = mpp[i-j].back();
                mpp[i-j].pop_back();
            }
        }
        return matrix;
    }
};
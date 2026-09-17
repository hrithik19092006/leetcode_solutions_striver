class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        map<int , vector<int>> mpp;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                mpp[i+j].push_back(matrix[i][j]);
            }
        }
        bool flip = true;
        for(auto &it : mpp){
            if(flip){
                reverse(it.second.begin() , it.second.end());
            }
            for(auto num : it.second){
                ans.push_back(num);
            }
            flip = !flip;
        }
        return ans;
    }
};
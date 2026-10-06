class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int , int> won ;
        unordered_map<int , int > lost;
        int n = matches.size();
        for(int i=0;i < n ; i++){
            won[matches[i][0]]++;
        }
        for(int i = 0 ; i < n ; i++){
            lost[matches[i][1]]++;
        }
        vector<int> temp_won;
        vector<int>temp_lost;
        for(auto it : lost){
            if(it.second == 1){
                temp_lost.push_back(it.first);
            }
        }
        sort(temp_lost.begin() , temp_lost.end());
        for(auto it : won){
            if(lost.find(it.first) != lost.end()){
                continue;
            }
            else{
                temp_won.push_back(it.first);
            }
        }
        sort(temp_won.begin() , temp_won.end());
        vector<vector<int>>ans(2);
        ans[0] = temp_won;
        ans[1] = temp_lost;
        return ans;
    }
};
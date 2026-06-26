class Solution {
    void generate(int index ,vector<int>&candidates ,vector <int>&temp ,int n , int target , vector <vector <int >>& ans , int sum){
        if(sum > target){
            return;
        }
        if(index == n){
            if(target == sum){
                ans.push_back(temp);
            }
            return ;
        }
        //take
        temp.push_back(candidates[index]);
        sum += candidates[index];
        generate(index, candidates , temp , n , target , ans , sum);

        //not take
        sum -= candidates[index];
        temp.pop_back();
        generate(index +1 , candidates , temp , n , target , ans , sum);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector <int > temp;
        int n = candidates.size();
        int sum = 0 ;
        generate(0 , candidates ,temp , n , target , ans , sum);
        return ans;
    }
};
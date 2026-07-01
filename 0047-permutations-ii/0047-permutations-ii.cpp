class Solution {
    void generate(int index , vector<int>&nums , set<vector<int>>&ans){
        if(index == nums.size()){
            ans.insert(nums);
            return;
        }
        for(int i = index ; i < nums.size() ; i++){
            swap(nums[index] , nums[i]);
            generate(index + 1 , nums , ans);
            swap(nums[index] , nums[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>ans;
        generate(0 , nums , ans);
        return vector<vector<int>>(ans.begin() , ans.end());
    }
};
class Solution {
    void generate(int index , vector<int>&nums , vector<int> & temp , vector<vector<int>>& ans , int n){
        if(index == n){
            ans.push_back(temp);
            return;
        }
        //take
        temp.push_back(nums[index]);
        generate(index + 1 , nums , temp , ans , n);
        //dont take
        temp.pop_back();
        generate(index + 1 , nums , temp , ans , n);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int>temp ;
        generate(0 , nums , temp , ans , n);
        return ans;
    }
};
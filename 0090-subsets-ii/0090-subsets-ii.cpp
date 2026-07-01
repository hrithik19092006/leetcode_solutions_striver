class Solution {
    void generate(int index , vector<int> & nums , set<vector<int>>&ans , vector<int> &temp){
        if(index == nums.size()){
            ans.insert(temp);
            return;
        }
        //take
        temp.push_back(nums[index]);
        generate(index + 1 , nums , ans , temp);

        //dont take
        temp.pop_back();
        generate(index + 1 , nums , ans , temp);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>ans;
        vector<int> temp;
        generate(0 , nums , ans , temp);
        return vector<vector<int>>(ans.begin() , ans.end());
    }
};
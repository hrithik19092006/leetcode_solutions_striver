class Solution {
    void generate(int index , vector<vector<int>>&ans ,vector<int>&nums , vector<int>&freq , vector<int>&temp){
        if(index == nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(freq[i] != 1){
                if(i > 0 && nums[i] == nums[i-1] && freq[i-1] == 0){
                    continue;
                }
                temp.push_back(nums[i]);
                freq[i] = 1;
                generate(index + 1 , ans ,nums , freq , temp );
                freq[i] = 0;
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<vector<int>>ans;
        vector<int>freq(nums.size() , 0);
        vector<int>temp;
        generate(0 , ans , nums , freq, temp);
        return ans;
    }
};
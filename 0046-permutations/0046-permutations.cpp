class Solution {
    void generate(vector<int>&nums , vector<int>&temp , vector<int>&freq , vector<vector<int>>&ans){
        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(freq[i] != 1){
                temp.push_back(nums[i]);
                freq[i] = 1;
                generate(nums , temp , freq , ans);
                freq[i] = 0;
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<int>freq(nums.size() , 0);
        generate(nums , temp , freq , ans);
        return ans;
    }
};
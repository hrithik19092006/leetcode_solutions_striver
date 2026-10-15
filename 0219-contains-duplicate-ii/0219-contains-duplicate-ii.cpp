class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int , vector<int>> mpp;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            mpp[nums[i]].push_back(i);
        }
        for(auto it : mpp){
            vector<int> temp = it.second;
            for(int i = 1 ; i < temp.size() ; i++){
                if(abs(temp[i] - temp[i-1]) <= k){
                    return true;
                }
            }
        }
        return false;
    }
};
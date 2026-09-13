class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int , vector<int>>mpp;
        for(int i = 0 ; i < nums.size() ; i++){
            mpp[nums[i]].push_back(i);
        }
        int count = 0 ;
        for(auto it : mpp){
            vector<int>indices = it.second;
            if(indices.size() == 3){
                if(indices[2] - indices[1] == indices[1] - indices[0]){
                    count ++;
                }
            }
        }
        return count;
    }
};
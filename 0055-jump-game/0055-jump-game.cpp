class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxindex = 0 ;
        for(int i =0 ; i < nums.size() ; i++){
            if(i > maxindex)return false;
            maxindex = max(i + nums[i] , maxindex);
        }
        if(maxindex >= nums.size()-1)return true;
        return false;
    }
};
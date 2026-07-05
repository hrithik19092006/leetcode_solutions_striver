class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n);
        prefix[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            prefix[i] = min(prefix[i-1] , nums[i]);
        }
        int ans = -1;
        for(int i = 1 ; i < n ; i++){
            int diff = nums[i]- prefix[i-1];
            if(diff > 0){
                ans =max(ans  , diff);
            }
        }
        return ans;
    }
};
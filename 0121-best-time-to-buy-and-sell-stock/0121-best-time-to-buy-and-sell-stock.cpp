class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n);
        prefix[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            prefix[i] = min(prefix[i-1] , nums[i]);
        }
        int ans = 0;
        for(int i = 0 ;i < n ; i++){
            int profit = nums[i] - prefix[i];
            ans = max(ans , profit);
        }
        return ans;
    }
};
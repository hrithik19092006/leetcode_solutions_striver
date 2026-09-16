class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int x = nums[n/2];
        vector<int>prefix(n);
        prefix[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        int lower = lower_bound(nums.begin() , nums.end() , x) - nums.begin();
        
        int left_sum = (lower > 0 )? prefix[lower-1] : 0;
        int left_cost = (x * lower) - left_sum;

        int right_sum = prefix[n-1] - left_sum;
        int right_cost = right_sum - (x * (n - lower));

        return right_cost + left_cost;
    }
};
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        for(int i = 1 ; i < n -1 ; i++){
            int x = nums[i];
            int y = INT_MAX;
            for(int j = 0 ; j < i ; j++){
                if(nums[j] < x){
                    y = min(y , nums[j]);
                }
            }
            if (y != INT_MAX){
                int z = INT_MAX;
                for(int k = i + 1 ; k < n ; k++){
                    if(nums[k] < x){
                        z = min(z , nums[k]);
                    }
                }
                if(y != INT_MAX && z != INT_MAX){
                    ans = min(ans , y + z + x);
                }
            }
        }
        if(ans == INT_MAX)return -1;
        return ans;
    }
};
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int max_index = -1;
        int min_index = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                max_index = i;
            }
            if(nums[i] < mini){
                mini = nums[i];
                min_index = i;
            }
        }
        int n = nums.size();
        int ans =0 ;
        int x = min(max_index , min_index);
        int y = max(max_index , min_index);
        int left = y +1 ;
        int right = n - x;
        int both = x +1 + n - y;
        return min({left , right , both});
    }
};
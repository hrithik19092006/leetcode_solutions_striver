class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        while(left <right){
            int sum = nums[left] + nums[right];
            if(sum > target){
                right--;
            }
            else if(sum < target){
                left ++;
            }
            else {
                return {left + 1 , right + 1};
            }
        }
        return {};
    }
};
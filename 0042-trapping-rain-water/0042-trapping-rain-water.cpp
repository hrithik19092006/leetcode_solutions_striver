class Solution {
public:
    int trap(vector<int>& nums) {
        int leftmax = 0;
        int rightmax = 0;
        int left = 0 ;
        int n = nums.size();
        int right = n-1;
        int ans = 0;
        while(left <= right){
            if(nums[left]<= nums[right]){
                if(nums[left] >= leftmax){
                    leftmax = nums[left];
                }
                else{
                    ans += leftmax - nums[left];
                }
                left ++;
            }
            else{
                if(nums[right] >= rightmax){
                    rightmax = nums[right];
                }
                else{
                    ans += rightmax - nums[right];
                }
                right--;
            }
        }
        return ans ;
    }
};
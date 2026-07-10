class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int left = 0 ;
        int right = n-1;
        int area = 0;
        while(left < right){
            if(nums[left] <= nums[right]){
                area = max(area , (right - left) * nums[left]);
                left ++;
            }
            else{
                area = max(area , (right - left) * nums[right]);
                right--;
            }
        }
        return area;
    }
};
class Solution {
    int solve(vector<int>&nums, int goal){
        if(goal < 0){
            return 0;
        }
        int count = 0 ;
        int sum = 0 ;
        int left = 0;
        for(int right = 0 ; right< nums.size() ; right++){
            sum += nums[right];
            while(left <= right && sum > goal){
                sum -= nums[left];
                left ++;
            }
            count = count + (right - left +1 );
        }
        return count;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums , goal) - solve(nums , goal-1);
    }
};
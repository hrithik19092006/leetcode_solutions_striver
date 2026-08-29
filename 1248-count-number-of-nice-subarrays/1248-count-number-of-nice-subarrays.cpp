class Solution {
    int solve(vector<int>&nums , int k ){
        if(k < 0){
            return 0;
        }
        int left = 0 ;
        int count = 0 ;
        int sum = 0;
        for(int right = 0 ; right < nums.size() ; right++){
            if(nums[right] % 2 != 0){
                sum ++;
            }
            while(left <=right && sum > k){
                if(nums[left] % 2 != 0){
                    sum --;
                }
                left ++;
            }
            count += right - left + 1 ;
        }
        return count;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums , k) - solve(nums, k-1);
    }
};
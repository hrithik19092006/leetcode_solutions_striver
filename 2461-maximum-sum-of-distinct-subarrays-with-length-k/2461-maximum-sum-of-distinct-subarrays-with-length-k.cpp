class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        int left = 0 ;
        long long sum = 0;
        unordered_map<int, int> mpp;
        for(int right = 0 ; right < nums.size() ; right ++){
            if(mpp.find(nums[right]) != mpp.end()){
                int new_left = mpp[nums[right]]+1 ;
                while(left < new_left){
                    sum -= nums[left];
                    left ++;
                }
            }
            mpp[nums[right]] = right;
            sum += nums[right];
            while(right -left +1 > k){
                sum -= nums[left];
                left++;
            }
            if(right -left + 1 == k){
                ans = max(ans , sum);
            }
        }
        return ans;
    }
};
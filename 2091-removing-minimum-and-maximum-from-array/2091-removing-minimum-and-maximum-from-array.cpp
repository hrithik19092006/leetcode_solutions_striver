class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        unordered_map<int , int> mpp;
        for(int i = 0 ; i < nums.size() ; i++){
            mini = min(nums[i] , mini);
            maxi = max(nums[i], maxi);
            mpp[nums[i]] = i ; 
        }
        int ans = 0 ;
        int n = nums.size();
        int x = min(mpp[mini] , mpp[maxi]);
        int y = max(mpp[mini] , mpp[maxi]);
        int temp1 = min(y + 1 , x + 1 + n - y);
        int temp2 = min(n-x , x+1 + n - y);
        ans = min(temp1 , temp2);
        return ans;
    }
};
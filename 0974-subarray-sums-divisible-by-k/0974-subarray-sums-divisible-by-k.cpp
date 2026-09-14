class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int , int> mpp;
        mpp[0] = 1;
        int n = nums.size();
        int sum = 0 ;
        int count = 0 ;
        for(int i = 0 ;i < n ;i++){
            sum += nums[i];
            int remainder = sum % k;
            if(remainder < 0){
                remainder += k;
            }
            count += mpp[remainder];
            mpp[remainder]++;
        }
        return count;
    }
};
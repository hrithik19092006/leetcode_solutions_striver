class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int maxlen = 0 ;
        unordered_map<int , int> mpp;
        int left =0 ;
        for(int right = 0 ; right< nums.size() ; right++){
            mpp[nums[right]]++;
            while(mpp.size() > 2){
                mpp[nums[left]] --;
                if(mpp[nums[left]] == 0){
                    mpp.erase(nums[left]);
                }
                left++;
            }
            maxlen = max(maxlen , right - left + 1 );
        }
        return maxlen;
    }
};
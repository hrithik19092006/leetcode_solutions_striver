class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        int n = nums.size();
        int left = 0 ;
        int maxlen = 0;
        for(int right = 0 ; right < n ; right++){
            freq[nums[right]]++;
            while(freq[0] > k){
                freq[nums[left]] --;
                left ++;
            }
            maxlen = max(maxlen , right - left + 1);
        }
        return maxlen;
    }
};
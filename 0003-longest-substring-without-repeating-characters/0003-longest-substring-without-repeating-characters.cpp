class Solution {
public:
    int lengthOfLongestSubstring(string nums) {
        int left = 0 ;
        int n= nums.size();
        int maxlen = 0 ;
        unordered_map<char , int> freq;
        for(int right = 0 ; right < n ; right ++){
            if(freq.find(nums[right]) != freq.end()){
                if(freq[nums[right]] >= left){
                    left = freq[nums[right]] + 1 ;
                }
            }
            maxlen = max(maxlen , right - left + 1 );
            freq[nums[right]] = right;
        }
        return maxlen;
    }
};
class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen = 0 ;
        int left = 0 ;
        vector<int>freq(26,  0);
        int maxfreq = 0 ;
        for(int right = 0 ; right < s.size() ; right ++){
            freq[s[right] - 'A'] ++;
            maxfreq = max(maxfreq , freq[s[right] - 'A']);
            int len = right - left + 1 ;
            while(len - maxfreq > k){
                freq[s[left] - 'A']--;
                left ++;
                len = right - left + 1 ;
            }
            maxlen = max(maxlen , len);
        }
        return maxlen;
    }
};
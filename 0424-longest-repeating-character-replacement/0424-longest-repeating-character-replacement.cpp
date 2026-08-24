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
            if(len - maxfreq > k){
                freq[s[left] - 'A']--;
                maxfreq = 0 ;
                for(int i = 0 ; i < freq.size() ; i++){
                    maxfreq = max(maxfreq , freq[i]);
                }
                left ++;
                len = right - left + 1 ;
            }
            if(len - maxfreq <= k){
                maxlen = max(maxlen , len);
            }
        }
        return maxlen;
    }
};
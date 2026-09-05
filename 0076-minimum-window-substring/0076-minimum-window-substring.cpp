class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char , int>freq;
        for(auto it : t){
            freq[it]++;
        }
        int left = 0 ;
        int index = -1;
        int minlen = INT_MAX ;
        int count = 0 ;
        for(int right = 0 ; right < s.size() ; right++){
            if(freq[s[right]] > 0){
                count ++;
            }
            freq[s[right]]--;
            while(count == t.size()){
                if(right - left + 1 < minlen ){
                    minlen = right -left +1;
                    index = left;
                }
                freq[s[left]]++;
                if(freq[s[left]] > 0){
                    count --;
                }
                left ++;
            }
        }
        if(index == -1)return "";
        return s.substr(index , minlen);
    }
};
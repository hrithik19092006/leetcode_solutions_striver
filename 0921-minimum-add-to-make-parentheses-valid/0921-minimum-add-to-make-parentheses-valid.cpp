class Solution {
public:
    int minAddToMakeValid(string s) {
        unordered_map<char , int> mpp;
        int count = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                mpp[s[i]]++;
            }
            else{
                if(mpp['('] > 0){
                    mpp['(']--;
                }
                else{
                    count ++;
                }
            }
        }
        if(mpp['('] > 0){
            count += mpp['('];
        }
        return count;
    }
};
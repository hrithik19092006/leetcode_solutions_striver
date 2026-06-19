class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())return false;
        unordered_map <char , int> mpp;
        for(auto it : s ){
            mpp[it] ++;
        }
        for(auto it : t){
            if(mpp.find(it) != mpp.end()){
                mpp[it] --;
            }
            else return false;
        }
        for(auto it : mpp){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char , int>mpp;
        for(auto it : s){
            mpp[it]++;
        }
        for(auto it : t){
            if(mpp[it] > 0){
                mpp[it] --;
            }
            else{
                return it;
            }
        }
        return 'a';
    }
};
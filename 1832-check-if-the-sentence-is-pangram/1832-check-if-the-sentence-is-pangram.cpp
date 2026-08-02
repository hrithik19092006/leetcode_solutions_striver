class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>mpp;
        for(int i = 0 ;i < sentence.size() ; i++){
            mpp.insert(sentence[i]);
        }
        for(char i = 'a' ; i <= 'z' ; i++){
            if(mpp.find(i) == mpp.end()){
                return false;
            }
        }
        return true;
    }
};
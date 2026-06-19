class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())return false;
        string x= s+s ;
        if(x.find(goal) != string::npos){
            return true;
        }
        else return false;
    }
};
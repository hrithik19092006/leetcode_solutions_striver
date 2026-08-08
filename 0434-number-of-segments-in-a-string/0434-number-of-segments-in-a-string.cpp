class Solution {
public:
    int countSegments(string s) {
        int count = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
            while(i < s.size() && s[i] == ' '){
                i++;
            }
            while(i < s.size() && s[i] != ' '){
                i++;
                if(s[i] == ' ' || i == s.size()){
                    count++;
                }
            }
        }
        return count;
    }
};
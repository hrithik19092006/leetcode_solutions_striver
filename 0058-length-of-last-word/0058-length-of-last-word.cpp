class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin() , s.end());
        int count = 0 ;
        int i = 0 ;
        while(s[i] == ' '){
            i++;
        }
        while(s[i] != ' '){
            count ++;
            if(i + 1 < s.size()){
                i++;
            }
            else{
                break;
            }
        }
        return count;
    }
};
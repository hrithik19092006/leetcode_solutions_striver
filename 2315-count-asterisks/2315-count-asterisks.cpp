class Solution {
public:
    int countAsterisks(string s) {
        bool flag = true;
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '|'){
                flag = !flag;
            }
            if(s[i] == '*' && flag == true){
                count ++;
            }
        }
        return count;
    }
};
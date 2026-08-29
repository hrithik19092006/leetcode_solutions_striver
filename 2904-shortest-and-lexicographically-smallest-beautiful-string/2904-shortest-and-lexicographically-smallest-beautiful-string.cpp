class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++){
            string temp = "";
            int count = 0 ;
            for(int j = i ; j < s.size() ; j++){
                temp.push_back(s[j]);
                if(s[j] == '1'){
                    count ++;
                }
                if(count == k){
                    temp = s.substr(i , j - i + 1);
                    int a = ans.size();
                    int b = temp.size();
                    if(ans == "" || a > b || (a == b && ans > temp)){
                        ans = temp ;
                    }
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int left = 0 ;
        int count = 0;
        for(int right = 0 ; right < s.size() ; right ++){
            if(s[right] == '1'){
                count ++;
            }
            while(left<=right && (count > k||count ==k &&s[left] == '0')){
                if(s[left] == '1'){
                    count --;
                }
                left ++;
            }
            if(count == k){
                string temp = s.substr(left , right -left + 1);
                int a = ans.size();
                int b = temp.size();
                if(ans == "" || a > b ||( a == b && ans > temp)){
                    ans = temp;
                }
            }
        }
        return ans;
    }
};
class Solution {
    void generate(int index , vector<vector<string>>&ans , vector<string>&temp , string s){
        if(index == s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = index ; i < s.size() ;i++){
            if(isPalindrome(index , i , s)){
                temp.push_back(s.substr(index , i - index + 1));
                generate(i+1 , ans , temp , s);
                temp.pop_back();
            }
        }
    }
    bool isPalindrome(int start , int end , string s){
        while (start <= end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        generate(0 , ans , temp , s);
        return ans;
    }
};
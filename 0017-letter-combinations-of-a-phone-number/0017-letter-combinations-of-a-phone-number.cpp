class Solution {
    void solve(int index ,string &digits , map<int , string> &mpp , string &temp , vector<string>&ans){
        if(index == digits.size()){
            ans.push_back(temp);
            return;
        }
        string letters = mpp[digits[index] - '0'];
        for(int i = 0 ; i < letters.size() ; i++){
            temp.push_back(letters[i]);
            solve(index + 1 , digits , mpp , temp , ans);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        map<int , string> mpp = {
            {2 , "abc"},
            {3 , "def"},
            {4 , "ghi"},
            {5 , "jkl"},
            {6 , "mno"},
            {7 , "pqrs"},
            {8 , "tuv"},
            {9 , "wxyz"},
        };
        string temp = "";
        vector <string> ans ;
        solve(0 , digits , mpp , temp , ans);
        return ans;
    }
};
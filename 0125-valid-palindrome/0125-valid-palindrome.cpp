class Solution {
    bool func(int i , string &temp , int n){
        if(i >= n/2)return true;
        if(temp[i] != temp[n-i - 1])return false;
        return func(i+1 , temp, n);
    }
public:
    bool isPalindrome(string s) {
        string temp;
        for(char ch : s){
            if(isalnum(ch)){
                temp.push_back(tolower(ch));
            }
        }
        return func(0, temp , temp.size());
    }
};
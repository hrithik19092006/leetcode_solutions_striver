class Solution {
    bool func(int start , string &temp , int end){
        while (start <= end){
            if(temp[start] != temp[end])return false;
            else {
                start ++;
                end--;
            }
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string temp;
        for(char ch : s){
            if(isalnum(ch)){
                temp.push_back(tolower(ch));
            }
        }
        return func(0, temp , temp.size() - 1);
    }
};
class Solution {
    void backtrack(int index , int n , int k , vector<string>&ans , int cost , char last_char , string &current){
        if(index == n){
            ans.push_back(current);
            return;
        }
        current.push_back('0');
        backtrack(index+1 , n , k , ans , cost , '0' , current);
        current.pop_back();
        if(last_char != '1' && cost+index <= k){
            current.push_back('1');
            backtrack(index + 1 , n , k , ans , cost + index , '1' , current);
            current.pop_back();
        }
    }
public:
    vector<string> generateValidStrings(int n, int k) {
        vector<string>ans;
        int cost = 0 ;
        string current= "";
        backtrack(0 ,n , k , ans , cost , '0' ,current);
        return ans;
    }
};
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        for(int i = 1 ; i <= num ; i++){
            for(int j = 9 ; j >= 0 ; j--){
                if(sum - j >= 0){
                    sum -= j;
                    ans.push_back('0' + j);
                    break;
                }
                else{
                    continue;
                }
            }
        }
        if(sum != 0){
            return "";
        }
        return ans;
    }
};
class Solution {
public:
    long long sumAndMultiply(int n) {
        string ans ;
        string temp = to_string(n);
        for(int i = 0 ; i < temp.size() ; i++){
            if(temp[i] != '0'){
                ans.push_back(temp[i]);
            }
        }
        int sum = 0 ;
        for(int i = 0 ; i < ans.size() ; i++){
            sum += ans[i] -'0';
        }
        if(!ans.empty()){
            int final = stoi(ans);
            return (long long )final * sum;
        }
        return 0;
    }
};
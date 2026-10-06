class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n = strs.size();
        int ans = INT_MIN;
        for(int i= 0 ; i < n ; i++){
            string x = strs[i];
            bool flag = false;
            for(int j = 0 ; j < x.size() ; j++){
                if(x[j] >= 'a' && x[j] <= 'z'){
                    flag = true;
                    int y = x.size();
                    ans = max(ans , y);
                    break;
                }
            }
            if(flag == false){
                ans = max(ans , stoi(x));
            }
        }
        return ans;
    }
};
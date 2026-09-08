class Solution {
public:
    int countCommas(int n) {
        if(n < 1000)return 0;
        int count = 0;
        for(int i = 1000 ; i <= n ; i++){
            string temp = to_string(i);
            count += (temp.size()-1)/3;
        }
        return count;
    }
};
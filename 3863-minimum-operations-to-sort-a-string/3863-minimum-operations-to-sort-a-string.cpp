class Solution {
public:
    int minOperations(string s) {
        string x = s;
        int n = s.size();
        sort(x.begin() , x.end());
        if(x == s)return 0;
        if(x.size() == 2 && x != s){
            return -1;
        }
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0 ; i < s.size() ; i++){
            mini = min((int)s[i] , mini);
            maxi = max(maxi , (int)s[i]);
        }
        if(s[0] == mini)return 1;
        if(s[n-1] == maxi)return 1;
        unordered_map<int , int > mpp;
        for(auto it : s){
            mpp[(int)it]++;
        }
        if(s[0] == maxi && mpp[maxi] ==1 && s[n-1] ==mini && mpp[mini] ==1){
            return 3;
        }
        else return 2;
    }
};
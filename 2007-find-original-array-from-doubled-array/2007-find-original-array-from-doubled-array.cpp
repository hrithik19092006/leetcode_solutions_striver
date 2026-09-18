class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if(n % 2 != 0)return {};

        unordered_map<int , int>mpp;
        for(auto it : changed){
            mpp[it]++;
        }
        sort(changed.begin() , changed.end());
        vector<int> ans;
        for(auto num : changed){
            //already used as a double value for an earlier element
            if(mpp[num] == 0)continue;
            mpp[num] --;
            
            int twice = num * 2 ;
            if(mpp[twice] == 0){
                return {};
            }
            mpp[twice]--;
            ans.push_back(num);

        }
        return ans;
    }
};
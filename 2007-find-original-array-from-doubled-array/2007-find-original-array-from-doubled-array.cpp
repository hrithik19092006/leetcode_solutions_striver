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
            int twice = num *2 ;
            if(mpp[num] == 0)continue;

            if(mpp.find(twice) == mpp.end() || mpp[twice] ==0 ){
                return {};
            }
            ans.push_back(num);
            mpp[num]--;
            mpp[twice]--;
        }
        return ans;
    }
};
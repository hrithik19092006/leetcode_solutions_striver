class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size() == 0){
            return {};
        }
        vector<pair<int , int>> temp ;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            temp.push_back({arr[i] , i});
        }
        sort(temp.begin() , temp.end());
        vector<int>ans(n);
        int rank = 1;
        ans[temp[0].second] = rank;
        for(int i = 1 ; i < n ; i++){
            if(temp[i].first != temp[i-1].first){
                rank++;
            }
            ans[temp[i].second] = rank;
        }
        return ans;
    }
};
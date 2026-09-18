class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int even_count = 0 ;
        for(auto it : nums){
            if(it % 2 ==0)even_count += it;
        }
        for(int i = 0 ; i < queries.size() ; i++){
            if(nums[queries[i][1]] %2 ==0  && queries[i][0] %2 ==0){
                even_count += queries[i][0];
            }
            else if(nums[queries[i][1]] %2 != 0 && queries[i][0] %2 != 0){
                even_count += (nums[queries[i][1]] + queries[i][0]);
            }
            else if(nums[queries[i][1]] %2 ==0 && queries[i][0] != 0){
                even_count -= nums[queries[i][1]];
            }
            nums[queries[i][1]] += queries[i][0];
            ans.push_back(even_count); 
        }
        return ans;
    }
};
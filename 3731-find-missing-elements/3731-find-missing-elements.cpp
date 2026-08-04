class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int start = nums[0];
        int end = nums[nums.size() - 1];
        vector<int> ans;
        int index = 0;
        for(int i = start ; i <= end; i++){
            if(nums[index] != i){
                ans.push_back(i);
            }
            else{
                index ++;
            }
        }
        return ans;
    }
};
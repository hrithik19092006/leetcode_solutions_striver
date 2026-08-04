class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int largest = INT_MIN;
        int smallest = INT_MAX;
        vector<int> ans;
        int index = 0;
        for(int i = 0 ; i < nums.size(); i++){
            largest = max(largest , nums[i]);
            smallest = min(smallest , nums[i]);
        }
        for(int i = smallest ; i <= largest; i++){
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
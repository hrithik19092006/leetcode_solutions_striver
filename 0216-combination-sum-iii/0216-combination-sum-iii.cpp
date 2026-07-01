class Solution {
    void generate(int index , vector<int> & nums , vector<vector<int >>&ans , vector<int> & temp , int n , int k , int sum){
        if(temp.size() == k){
            if(sum == n){
                ans.push_back(temp);
            }
            return;
        }
        if(index == nums.size()){
            return;
        }
        //take
        temp.push_back(nums[index]);
        sum = sum + nums[index];
        generate(index + 1 , nums , ans , temp , n , k ,sum);

        //dont take
        sum = sum - nums[index];
        temp.pop_back();
        generate(index + 1 , nums , ans , temp , n , k ,sum);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums{1, 2 ,3 ,4 ,5, 6, 7, 8, 9};
        vector<vector<int>>ans;
        vector<int>temp;
        generate(0 , nums , ans , temp , n , k , 0);
        return ans;
    }
};
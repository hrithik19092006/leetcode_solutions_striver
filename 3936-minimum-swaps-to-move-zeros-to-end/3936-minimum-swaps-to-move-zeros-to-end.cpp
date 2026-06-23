class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int j = n-1;
        int i = 0 ;
        int count = 0 ;
        while(i < j){
            if(nums[i] == 0 && nums[j] == 0){
                j--;
            }
            if(nums[i] == 0 && nums[j] != 0){
                swap(nums[i] , nums[j]);
                i++;
                j--;
                count ++;
            }
            if(nums[i] != 0){
                i++;
            }
        }
        return count;
    }
};
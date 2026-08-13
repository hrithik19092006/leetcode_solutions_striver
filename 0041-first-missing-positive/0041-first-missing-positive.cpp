class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int index = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] <= 0 ){
                continue;
            }
            else{
                if(nums[i] == index){
                    index++;
                }
                else if(nums[i] == index -1 ){
                    continue;
                }
                else {
                    return index;
                }
            }
        }
        if(nums[nums.size() - 1] <= 0){
            return 1;
        }
        else{
            return nums[nums.size() -1] + 1;
        }
    }
};
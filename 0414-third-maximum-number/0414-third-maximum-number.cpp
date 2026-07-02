class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n =nums.size();
        long long largest = LLONG_MIN;
        long long secondl = LLONG_MIN;
        long long thirdl = LLONG_MIN;
        for(int i = 0 ; i < n ;i++){
            if(nums[i] == largest || nums[i] == secondl || nums[i] == thirdl){
                continue;
            } 
            if(nums[i] > largest){
                thirdl = secondl;
                secondl = largest;
                largest = nums[i];
            }
            else if(nums[i] > secondl){
                thirdl = secondl;
                secondl = nums[i];
            }
            else if(nums[i] > thirdl){
                thirdl = nums[i];
            }
        }
        return(thirdl == LLONG_MIN? largest : thirdl);
    }
};
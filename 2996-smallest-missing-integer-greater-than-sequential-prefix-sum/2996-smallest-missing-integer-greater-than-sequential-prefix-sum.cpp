class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int , int>mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        int index = 1;
        for(int i= 0 ; i < nums.size()-1 ;i++){
            if(nums[i] + 1 == nums[i + 1]){
                index ++;
            }
            else{
                break;
            }
        }
        int i = 0;
        int sum = 0 ;
        while(index -- && i < nums.size()){
            sum += nums[i];
            i++;
        }
        while(mpp.find(sum) != mpp.end()){
            sum ++;
        }
        return sum;
    }
};
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0 ;
        for(auto it : nums){
            sum += it;
        }
        int count = 0 ;
        while(sum % k != 0){
            sum--;
            count ++;
        }
        return count;
    }
};
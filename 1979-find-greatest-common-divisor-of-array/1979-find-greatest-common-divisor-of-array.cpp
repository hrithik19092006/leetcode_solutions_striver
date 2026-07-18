class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            mini = min(mini , nums[i]);
            maxi = max(maxi , nums[i]);
        }
        while(maxi > 0 && mini > 0){
            if(maxi > mini){
                maxi = maxi % mini;
            }
            else{
                mini = mini % maxi;
            }
        }
        if(maxi ==0 ){
            return mini;
        }
        else{
            return maxi;
        }
    }
};
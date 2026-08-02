class Solution {
    long long gcd(int a , int b){
        while(a > 0 && b > 0){
            if(a > b){
                a = a % b;
            }
            else{
                b = b % a;
            }
        }
        if(a ==0){
            return 1LL * b * b;
        }
        else{
            return 1LL * a * a;
        }
    }
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for(int i = 0 ; i < n-1 ; i++){
            for (int j = i+1 ; j < n ; j++){
                long long multi = 1LL * nums[i] * nums[j];
                long long temp = multi / gcd(nums[i] , nums[j]);
                ans = max(ans , temp);
            }
        }
        return ans;
    }
};
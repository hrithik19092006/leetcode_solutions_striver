class Solution {
    int calc(int a , int b){
        while(a >0 &&  b >0){
            if(a > b){
                a = a % b;
            }
            else{
                b = b % a;
            }
        }
        if(a == 0){
            return b;
        }
        else{
            return a;
        }
    }
public:
    long long gcdSum(vector<int>& nums) {
        int maxi = 0;
        vector<int>gcd;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            maxi = max(nums[i], maxi);
            gcd.push_back(calc(nums[i] , maxi));
        }
        sort(gcd.begin() , gcd.end());
        long long sum = 0 ;
        if(n % 2 == 0){
            for(int i = 0 ; i < gcd.size() /2 ; i++){
                sum = sum + calc(gcd[i] , gcd[n-i -1]);
            }
        }
        else{
            for(int i = 0 ; i < gcd.size() / 2 ; i++){
                sum += calc(gcd[i] , gcd[n-i - 1]);
            }
        }
        return sum;
    }
};
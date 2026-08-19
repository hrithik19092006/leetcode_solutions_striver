class Solution {
    bool isPrime(int x){
        if(x < 2){
            return false;
        }
        for(int i = 2 ; i * i <= x ; i++){
            if(x % i == 0){
                return false;
            }
        }
        return true;
    }
public:
    int sumOfPrimesInRange(int n) {
        int x = n;
        int rev = 0 ;
        int ans = 0 ;
        while(x != 0){
            int last_dig = x % 10;
            rev = rev * 10 + last_dig;
            x = x/10;
        }
        int start = min(rev , n);
        int end = max(rev , n);
        for(int i = start ; i <= end ; i++){
            if(isPrime(i)){
                ans += i;
            }
        }
        return ans;
    }
};
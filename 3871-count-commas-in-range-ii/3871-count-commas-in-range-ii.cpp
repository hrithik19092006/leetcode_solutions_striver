class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000)return 0;
        long long count = 0 ;
        if(n < 1000000){
            return n - 999;
        }
        count += 1000000LL - 1000;
        if(n < 1000000000){
            return count + (n - 999999LL) * 2 ;
        }
        count += (1000000000LL - 1000000) * 2 ;
        if(n < 1000000000000){
            return count + (n - 999999999LL) * 3;
        }
        count += (1000000000000LL - 1000000000LL) * 3;
        if(n < 1000000000000000){
            return count + (n - 999999999999LL) * 4;
        }
        count += (1000000000000000LL - 1000000000000LL) * 4 ;
        return count + (n - 999999999999999LL) * 5 ;
    }
};
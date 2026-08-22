class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 ;
        long long prod = 1;
        int x= n;
        while(n != 0){
            int last_dig = n % 10;
            sum += last_dig;
            prod *=  last_dig;
            n/= 10;
        }
        long ans = prod + sum;
        return x % ans == 0;
    }
};
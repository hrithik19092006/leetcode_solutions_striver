class Solution {
public:
    int mirrorDistance(int n) {
        int x = n ;
        int reverse = 0 ;
        while(x != 0 ){
            int last_dig = x % 10;
            reverse =(reverse * 10 ) + last_dig;
            x = x /10;
        }
        return abs(reverse - n);
    }
};
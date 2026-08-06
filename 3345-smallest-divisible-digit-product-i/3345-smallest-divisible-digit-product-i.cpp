class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n ; i <= 100 ; i++){
            int x = i;
            int prod = 1;
            while(x != 0){
                int last_dig = x % 10;
                prod = prod * last_dig ;
                x = x/10;
            }
            if(prod % t == 0){
                return i;
            }
        }
        return -1;
    }
};
class Solution {
public:
    int maxProduct(int n) {
        string x = to_string(n);
        int largest = 0;
        int second = 0;
        for(int i = 0 ; i < x.size() ; i++){
            if(x[i] - '0' > largest){
                second = largest;
                largest = x[i] - '0';
            }
            else if(x[i] - '0' > second){
                second = x[i] - '0';
            }
        }
        return second * largest;
    }
};
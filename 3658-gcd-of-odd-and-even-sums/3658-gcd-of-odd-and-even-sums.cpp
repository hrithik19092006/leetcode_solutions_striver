class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        long sumodd = n * n;
        long sumeven = n * (n+1);
        while(sumodd >0 && sumeven > 0){
            if(sumodd > sumeven){
                sumodd = sumodd % sumeven;
            }
            else{
                sumeven = sumeven % sumodd;
            }
        }
        if(sumodd == 0){
            return sumeven;
        }
        else{
            return sumodd;
        }
    }
};
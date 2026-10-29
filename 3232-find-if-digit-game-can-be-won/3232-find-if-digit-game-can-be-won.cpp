class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int double_number = 0 ;
        for(auto it : nums){
            if(it < 10){
                single += it;
            }
            else {
                double_number += it;
            }
        }
        if(double_number == single)return false;
        return true;
    }
};
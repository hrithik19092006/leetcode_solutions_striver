class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int , vector<int>> mpp;
        for(int i = 0 ; i < nums.size() ; i++){
            mpp[nums[i]].push_back(i);
        }
        int count = 0 ;
        for(auto it : mpp){
            vector <int > indices = it.second;
            bool equallyspaced = true;
            if(indices.size() >= 3){
                int req = indices[1] - indices[0];
                for(int i = 2 ; i < indices.size() ; i++){
                    if(indices[i] - indices[i-1] != req){
                        equallyspaced = false;
                        break;
                    }
                }
                if(equallyspaced){
                    count ++;
                }
            }
        }
        return count;
    }
};
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0 ;
        unordered_map<char , int> mpp;
        for(auto it : jewels){
            mpp[it]= 0;
        }
        for(int i = 0 ; i < stones.size() ; i++){
            if(mpp.find(stones[i]) != mpp.end()){
                count ++;
            }
        }
        return count;
    }
};
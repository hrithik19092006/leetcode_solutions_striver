class Solution {
    static bool comp(vector<int>&p1 , vector<int>&p2){
        return p1[1] > p2[1];
    }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin() , boxTypes.end() , comp);
        int ans = 0 ;
        for(int i = 0 ; i < boxTypes.size() ; i++){
            if(boxTypes[i][0] <= truckSize){
                ans += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
            else{
                ans += truckSize * boxTypes[i][1];
                break;
            }
        }
        return ans;
    }
};
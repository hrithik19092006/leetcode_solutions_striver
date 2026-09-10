class Solution {
    static bool comp(vector<int>&a , vector<int>&b){
        if(a[1] < b[1])return true;
        return false;
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count = 0 ;
        sort(intervals.begin() , intervals.end() , comp);
        int free = intervals[0][1];
        for(int i = 1 ; i < intervals.size() ; i++){
            if(intervals[i][0] >= free){
                free = intervals[i][1];
            }
            else{
                count++;
            }
        }
        return count;
    }
};
class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        sort(intervals.begin() , intervals.end());
        for(int i = 0 ;i < intervals.size() -1 ; i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            for(int j = i + 1 ; j < intervals.size() ; j++){
                if(intervals[j][0]<= end && intervals[j][0] >= start){
                    count++;
                }
            }
        }
        return count;
    }
};
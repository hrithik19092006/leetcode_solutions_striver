class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        long long total_time = 0 ;
        sort(intervals.begin() , intervals.end());
        int current_start = intervals[0][0];
        int current_end = intervals[0][1];
        for(int i = 1 ; i < intervals.size()  ; i++){
            if(intervals[i][0] <= current_end){
                current_end = max(current_end , intervals[i][1]);
            }
            else{
                total_time +=(long long )(current_end - current_start + 1);
                current_start = intervals[i][0];
                current_end = intervals[i][1];
            }
        }
        total_time += (long long)(current_end - current_start +1);
        long long bulbs = min(n , (brightness + 2)/3);
        return bulbs * total_time;
    }
};
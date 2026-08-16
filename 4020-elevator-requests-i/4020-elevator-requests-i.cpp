class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int floor = 0;
        int sum = 0 ;
        for(int i =0 ;i < requests.size() ; i++){
            sum = sum + abs(requests[i] - floor);
            floor = requests[i];
        }
        return sum;
    }
};
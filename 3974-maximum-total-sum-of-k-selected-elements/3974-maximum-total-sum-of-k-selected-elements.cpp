class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        priority_queue<int> pq;
        for(auto it : nums){
            pq.push(it);
        }
        long long sum = 0;
        while(mul != 0 && k !=0){
            sum = sum + (long long)pq.top() * mul;
            pq.pop();
            mul--;
            k--;
        }
        while(k !=0){
            sum = sum + pq.top();
            pq.pop();
            k--;
        }
        return sum;
    }
};
class Solution {
public:
    typedef long long ll;
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<ll>prefix(n);
        prefix[0] = nums[0];
        for(int i = 1; i < n ; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        vector<ll> ans;
        for(int i = 0 ; i < queries.size() ; i++){
            ll x = queries[i];
            int index = lower_bound(nums.begin() , nums.end() , x) - nums.begin();

            ll left_sum = (index > 0) ? prefix[index-1] : 0;
            ll left_cost = (x * index) - left_sum;

            ll right_sum = prefix[n-1] - left_sum;
            ll right_cost = right_sum - (x * (n- index));

            ans.push_back(left_cost + right_cost);
        }
        return ans;
    }
};
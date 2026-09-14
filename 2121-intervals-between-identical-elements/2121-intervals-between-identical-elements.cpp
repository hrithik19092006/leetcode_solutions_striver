class Solution {
public:
    typedef long long ll;
    vector<long long> getDistances(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , ll>freq;
        unordered_map<int , ll> indexsum;

        vector<ll>ans(n , 0);

        //left to right
        for(int i = 0 ; i < n ; i++){
            ll count = freq[nums[i]];
            ll sum = indexsum[nums[i]];

            ans[i] += count * i - sum;

            freq[nums[i]]++;
            indexsum[nums[i]] += i;
        }

        indexsum.clear();
        freq.clear();

        //right to left
        
        for(int i = n-1 ; i >= 0 ; i--){
            ll count = freq[nums[i]];
            ll sum = indexsum[nums[i]];

            ans[i] += sum - count * i;

            freq[nums[i]]++;
            indexsum[nums[i]] += i;
        }
        return ans;
    }
};
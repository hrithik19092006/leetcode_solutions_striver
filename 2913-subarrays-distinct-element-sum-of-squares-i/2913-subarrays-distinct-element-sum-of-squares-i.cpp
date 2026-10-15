class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int count = n;
        for(int i = 0 ; i < n ; i++){
            unordered_set<int> st;
            st.insert(nums[i]);
            for(int j = i+1 ; j < n ; j++){
                st.insert(nums[j]);
                int x = st.size();
                count += x * x;
            }
        }
        return count;
    }
};
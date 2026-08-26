class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>temp;
        for(auto it : nums){
            if(it % k == 0){
                temp.push_back(it);
            }
        }
        sort(temp.begin() , temp.end());
        int x = 0 ;
        int n = temp.size();
        for(int i = 0 ; i < n - 1 ; i++){
            if(temp[i] == temp[i+1]){
                continue;
            }
            else {
                x+= k;
                if(temp[i] != x ){
                    return x;
                }
            }
        }
        x+= k;
        if(temp[n-1] != x ){
            return x;
        }
        return x+k;
    }
};
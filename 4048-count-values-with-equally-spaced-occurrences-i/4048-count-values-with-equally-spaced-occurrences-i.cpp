class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int , int>mpp;
        for(auto it : nums){
            mpp[it] ++;
        }
        vector<int > temp ;
        for(auto it : mpp){
            if(it.second == 3){
                temp.push_back(it.first);
            }
        }
        if(temp.size() == 0)return 0;
        unordered_map<int, int> freq;
        for(auto it : temp){
            freq[it]++;
        }
        int count = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(freq.find(nums[i]) != freq.end()){
                int temp = nums[i];
                int first = i;
                int second = -1;
                int third = -1;
                for(int j = i+1; j < nums.size() ; j++){
                    if(nums[j] == temp){
                        if(second == -1)second= j;
                        else{
                            third = j;
                        }
                    }
                    if(third != -1)break;
                }
                if(third != -1 && second != -1){
                    if(third - second == second - first)count++;
                }
            }
        }
        return count;
    }
};
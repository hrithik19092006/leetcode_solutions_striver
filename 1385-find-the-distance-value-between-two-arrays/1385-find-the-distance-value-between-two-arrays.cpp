class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0 ;
        bool flag = true;
        for(int i = 0 ; i < arr1.size() ; i++){
            for(int j = 0 ; j < arr2.size() ; j++){
                int x = abs(arr1[i] - arr2[j]);
                if(x <= d){
                    flag = false;
                    break;
                }
            }
            if(flag){
                count ++;
            }
            flag = true;
        }
        return count;
    }
};
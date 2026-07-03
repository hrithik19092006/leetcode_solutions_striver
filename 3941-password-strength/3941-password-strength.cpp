class Solution {
public:
    int passwordStrength(string password) {
        int count = 0;
        set<char>st;
        for(auto it : password){
            st.insert(it);
        }
        for(auto it : st){
            if(it>= 'a' && it <= 'z'){
                count ++;
            }
            else if(it >= 'A' && it <= 'Z'){
                count = count + 2;
            }
            else if(it - '0' >= 0 && it - '0' <= 9){
                count = count + 3;
            }
            else{
                count = count + 5;
            }
        }
        return count;
    }
};
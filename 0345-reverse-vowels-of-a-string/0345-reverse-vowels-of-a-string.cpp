class Solution {
public:
    string reverseVowels(string s) {
        vector<int>temp;
        for(int i = 0 ; i < s.size();  i++){
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
                temp.push_back(s[i]);
            }
        }
        reverse(temp.begin() , temp.end());
        int index = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
                s[i] = temp[index];
                index++;
            }
        }
        return s;
    }
};
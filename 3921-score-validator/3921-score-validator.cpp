class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n= events.size();
        int counter = 0;
        int score = 0;
        int i = 0;
        while(i < n && counter  < 10){
            if(events[i] == "W"){
                counter ++;
                i++;
            }
            else if(events[i] == "WD"){
                score ++;
                i++;
            }
            else if(events[i] == "NB"){
                score ++;
                i++;
            }
            else{
                score += stoi(events[i]);
                i++;
            }
        }
        return {score , counter};
    }
};
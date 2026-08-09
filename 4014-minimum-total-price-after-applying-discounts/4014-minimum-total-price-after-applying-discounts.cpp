class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin() , prices.end() , greater<int>());
        sort(discounts.begin() , discounts.end() , greater<int>());
        vector<double>temp_price(prices.begin() , prices.end());
        vector<double>temp_discount(discounts.begin() , discounts.end());
        for(int i = 0 ; i < temp_discount.size() ; i++){
            if(i < temp_price.size()){
                temp_price[i] = temp_price[i] * (100 - temp_discount[i]) / 100; 
            }
            else{
                break;
            }
        }
        double sum = 0 ;
        for(auto it : temp_price){
            sum += it;
        }
        return sum;
    }
};
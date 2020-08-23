class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(!prices.size()) return 0;
        
        int suffixArr[prices.size() + 1], mx = INT_MIN;
        for(int i = prices.size() - 1; i >= 0; i--){
            if(i == prices.size() - 1){
                suffixArr[i] = prices[i];
                mx = prices[i];
            }else{
                mx = max(mx, prices[i]);
                suffixArr[i] = mx;
            }
        }
        
        int profit = 0;
        for(int i=0; i < prices.size() - 1; i++){
            profit = max(profit, suffixArr[i+1] - prices[i]);
        }
        
        return profit;
    }
};


//Better
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minprice = INT_MAX, profit = 0;
        for(int i=0; i<prices.size(); i++){
            minprice = min(minprice, prices[i]);
            profit = max(profit, prices[i] - minprice);
        }
        return profit;
    }
};

// Wrong
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, profit = 0, index;
        int dp[prices.size()+2];
        
        for(int i = 0; i < prices.size(); i++){
           
            if(!i) dp[i] = 0;
            else{
                dp[i] = 0;
                for(int index = 0; index < i; index++){
                   
                    if(index == 0){
                        dp[i] = max( max(dp[i], dp[i-1]), (prices[i] - prices[index]) );
                    }else{
                        dp[i] = max( max(dp[i], dp[i-1]), (prices[i] - prices[index]) + dp[index - 1]);
                    }
            }
        }
        return dp[prices.size() - 1];
    }
};

//Correct
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPrice = INT_MAX, profit = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i] >= prices[i-1]){
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};
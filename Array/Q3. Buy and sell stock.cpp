
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


class Solution {
public:
    
    // brute force
    
    int maxProfit(vector<int>& prices) {
        int profit,maxi=0;
        
       for(int i=0;i<prices.size()-1;i++){
           for(int j=i+1;j<prices.size();j++){
           profit = prices[j]-prices[i];
               maxi= max(profit,maxi);
       } 
       } 
        
        
        return maxi;  
    }
    
    

    
    // optimal
    int maxProfit(vector<int> &prices) {
    int maxPro = 0;
    int n = prices.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    
    return maxPro;
}
    
};






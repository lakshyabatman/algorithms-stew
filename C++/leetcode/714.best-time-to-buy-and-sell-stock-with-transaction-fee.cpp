/*
 * @lc app=leetcode id=714 lang=cpp
 *
 * [714] Best Time to Buy and Sell Stock with Transaction Fee
 */

/**
 * 
 * At the end of the i-th day, we maintain cash, the maximum profit we could have if we did not have a share of stock,
 * and hold, the maximum profit we could have if we owned a share of stock.
 * To transition from the i-th day to the i+1-th day, we either sell our stock cash = max(cash, hold + prices[i] - fee) 
 * or buy a stock hold = max(hold, cash - prices[i]). At the end, we want to return cash. We can transform cash first 
 * without using temporary variables because selling and buying
 * on the same day can't be better than just continuing to hold the stock.
 * */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        if(prices.size() ==0 ) return 0;
        int profit = 0;
        int hold = -prices[0];
        for(int i =1;i<prices.size();i++) {
            profit = max(profit, hold+prices[i]-fee);
            hold = max(hold, profit-prices[i]);

        }
        return profit;

    }
};
// @lc code=end


//
//  Best Time to Buy and Sell Stock II.cpp
//  
//
//  Created by Shubham Makwana on 11/4/23.
//

#include "Best Time to Buy and Sell Stock II.hpp"
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
        {
            return 0;
        }
        int profit =0;
        for( int i=0;i<prices.size()-1;i++)
        {
            if(prices[i+1]>prices[i])
            {
                int tempprofit = prices[i+1]-prices[i];
                profit = profit + tempprofit;
            }
        }
        return profit;
    }
};

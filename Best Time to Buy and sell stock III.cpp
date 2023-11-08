//
//  Best Time to Buy and sell stock III.cpp
//  
//
//  Created by Shubham Makwana on 11/4/23.
//

#include "Best Time to Buy and sell stock III.hpp"
/* here one of the way that i thought is something like yopu have to do two transactions in the whole sum such that you want to spend minimum while buying a stock and get max profit from it while selling it . And that can happen with one transaction as well and with two transaction as well . You can not go above two transcations . Now if you are buying first stock then you will need to spend some money for buying it( -prices[i]) and will get some as return while selling it as well ( + prices[i]). WHat you can do here is lose the money and find the lowest amount that you can get which is done while buying first stock ( fb) and then sell it for way higher prices that you will get after buyiing and same for the second stock as well .
*/
// Whatever we are spending on buying a stock will be negative and whatever we are getting will be positive.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int firstbuy = INT_MIN;
        int secondbuy = INT_MIN;
        int firstsell = 0;
        int secondsell = 0;
        // INtializing the lowest values so buying is cheaper in this case
        for(int i =0 ;i<prices.size();i++)
        {
            firstbuy = max( firstbuy , -prices[i]);// - is there becuase we have to spend some and we are spending from our pocket
            firstsell = max( firstsell , firstbuy + prices[i]); // Here we are getting some money in return so adding that to new budget
            secondbuy = max( secondbuy , firstsell - prices[i]); // again we are buying so subtracting the money ;
            secondsell = max( secondsell , secondbuy + prices[i]); //again adding to maximize the profit gained in second transaction
        // NOte here if we will have only one transaction then your second buy will always be the value poiniting to first sell so at last you will have second sell as first sell and if in case we will have two transcations then your second sell would have been maximixed.
        }
        return secondsell;
    }
};

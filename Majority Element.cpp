//
//  Majority Element.cpp
//  
//
//  Created by Shubham Makwana on 11/3/23.
//

#include "Majority Element.hpp"
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int finalval=0;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maxi = INT_MIN;
        unordered_map<int,int> :: iterator itr = mp.begin();
        while(itr!=mp.end())
        {
            maxi = max(itr->second,maxi);
            itr++;
        }
        itr = mp.begin();
        for( auto &i : mp)
        {
            if(i.second == maxi)
            {
                finalval = i.first;
                break;
            }
        }

        return finalval;
    }
};

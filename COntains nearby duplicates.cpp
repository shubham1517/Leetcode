//
//  COntains nearby duplicates.cpp
//  
//
//  Created by Shubham Makwana on 11/5/23.
//

#include "COntains nearby duplicates.hpp"
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for( int i=0;i<nums.size();i++)
        {
            unordered_map<int,int> ::iterator itr = mp.find(nums[i]);
            if(itr!=mp.end())
            {
                cout<<"entered"<<endl;
                if(abs(i-itr->second)<=k)
                {
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
        
    }
};

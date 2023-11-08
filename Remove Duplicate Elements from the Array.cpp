//
//  Remove Duplicate Elements from the Array.cpp
//  
//
//  Created by Shubham Makwana on 11/3/23.
//

#include "Remove Duplicate Elements from the Array.hpp"
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        nums.clear();
        map<int,int> ::iterator itr = mp.begin();
        while(itr!=mp.end())
        {
            nums.push_back(itr->first);
            itr++;
        }
        return mp.size();
    }
};

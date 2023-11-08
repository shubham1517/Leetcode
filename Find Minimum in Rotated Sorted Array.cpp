//
//  Find Minimum in Rotated Sorted Array.cpp
//  
//
//  Created by Shubham Makwana on 11/2/23.
//

#include "Find Minimum in Rotated Sorted Array.hpp"
class Solution {
public:
    int findMin(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        unordered_map<int,int> ::iterator itr =mp.begin();
        int mini = INT_MAX;
        while(itr!=mp.end())
        {
            mini = min(itr->first,mini);
            ++itr;
        }
        return mini;
    }
};

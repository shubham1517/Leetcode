//
//  Remove duplicates from a sorted array II.cpp
//  
//
//  Created by Shubham Makwana on 11/3/23.
//

#include "Remove duplicates from a sorted array II.hpp"
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
            if(itr->second>=2)
            {
                nums.push_back(itr->first);
                nums.push_back(itr->first);
            }
            else{
                nums.push_back(itr->first);
               
            }
            itr++;
        }
        return nums.size();
    }
};

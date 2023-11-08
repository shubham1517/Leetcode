//
//  LOngest COnsecutive Sequence.cpp
//  
//
//  Created by Shubham Makwana on 11/6/23.
//

#include "LOngest COnsecutive Sequence.hpp"
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> mp ;
        int longest = 0;
        for( int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=false;
        }
        for( auto num : nums)
        {
            int currentlength=1;
            int nextnum = num + 1;
            int prevnum = num - 1;
            while(mp.find(nextnum)!=mp.end() && mp[nextnum]==false)
            {
                currentlength++;
                mp[nextnum]=true;
                nextnum++;
            }
            while(mp.find(prevnum)!=mp.end() && mp[prevnum]==false)
            {
                currentlength++;
                mp[prevnum]=true;
                prevnum--;
            }
            longest = max(longest,currentlength);
        }
        return longest;
    }
};

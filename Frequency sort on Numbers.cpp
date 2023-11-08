//
//  Frequency sort on Numbers.cpp
//  
//
//  Created by Shubham Makwana on 11/1/23.
//

#include "Frequency sort on Numbers.hpp"
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
    vector<int> ans;
    unordered_map<int,int> mp;
    priority_queue<pair<int,int>> pq;
    for(int i=0 ;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }
    for(auto &i : mp)
    {
        pq.push({-1*i.second, i.first});
    }
    while(!pq.empty())
    {
        for(int i=0 ; i< -1*pq.top().first;i++ )
        {
            ans.push_back(pq.top().second);
        }
        pq.pop();
    }
    return ans;
    }
};

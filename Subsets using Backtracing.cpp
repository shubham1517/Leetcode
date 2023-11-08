//
//  Subsets using Backtracing.cpp
//  
//
//  Created by Shubham Makwana on 11/7/23.
//

#include "Subsets using Backtracing.hpp"
void backtrack(vector<vector<int>> &ans,vector<int> &nums, vector<int> &temp,int initial)
{
    ans.push_back(temp);
    for( int i= initial;i<nums.size();i++)
    {
        temp.push_back(nums[i]);
        backtrack(ans,nums,temp,i+1);
        temp.pop_back();
    }
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    backtrack(ans,nums,temp,0);
    return ans;
}
};


//
//  Jump Game.cpp
//  
//
//  Created by Shubham Makwana on 11/4/23.
//

#include "Jump Game.hpp"
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int index = 0;
        int numsatindex = nums[0];
        int n = nums.size()-1;// This is my last index
        for(int i = n-1 ; i>=0 ;i--)//Start from the reverse and change the destination to see if you can reach to that destination or not
        {
            if( (i + nums[i]) >= n)
            {
                n = i;
            }
        }
        if( n==0)
        {
            return true;
        }
        return false;
    }
};

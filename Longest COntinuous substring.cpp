//
//  Longest COntinuous substring.cpp
//  
//
//  Created by Shubham Makwana on 11/1/23.
//

#include "Longest COntinuous substring.hpp"
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int result = 0;
        int left = 0;
        for(int i=0 ; i<nums.size();i++)
        {
            if( i > 0 && nums[i-1]>=nums[i])
            {
                left = i;
            }
            result = max(result,i-left+1);
        }
        return result;
    }
};

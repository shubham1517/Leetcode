//
//  Minimum Size Subarray Sum.cpp
//  
//
//  Created by Shubham Makwana on 11/7/23.
//

#include "Minimum Size Subarray Sum.hpp"
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int minimumwindowsize= INT_MAX;
        for( int right = 0;right<nums.size();right++)
        {
            sum = sum + nums[right];
            while( sum >= target)
            {
                sum = sum -nums[left];
                minimumwindowsize= min(minimumwindowsize, right-left+1);
                left++;
            }
        }
        if( minimumwindowsize==INT_MAX){
            return 0;
        }
        return minimumwindowsize;
       
    }
};

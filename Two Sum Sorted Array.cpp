//
//  Two Sum sorted array.cpp
//  
//
//  Created by Shubham Makwana on 11/5/23.
//

#include "Two Sum sorted array.hpp"
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int right = nums.size()-1;
        int left =0;
        vector<int> ans;
        while(left<=right)
        {
            if( nums[left]+nums[right]==target)
            {
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            else if((nums[left]+nums[right]) > target)
            {
                right--;
            }
            else
            {
                left ++;
            }
            
            
        }

        return ans;
        
    }
};

//
//  Remove Element.cpp
//  
//
//  Created by Shubham Makwana on 11/3/23.
//

#include "Remove Element.hpp"
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i=0 ; i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};

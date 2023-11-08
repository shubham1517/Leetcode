//
//  COntainer with most water.cpp
//  
//
//  Created by Shubham Makwana on 11/5/23.
//

#include "COntainer with most water.hpp"
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxarea = 0;

        while(left<right)
        {
            int lowest = min(height[right],height[left]);
            int width = right - left;
            int area = lowest * width;
            maxarea = max(maxarea, area);

            if( height[right]>height[left])
            {
                left++;
            }
            else{
                right--;
            }
        }
    return maxarea;
    }
};

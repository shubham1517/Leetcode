//
//  Product of Array Except self.cpp
//  
//
//  Created by Shubham Makwana on 11/5/23.
//

#include "Product of Array Except self.hpp"
//O(N) solution with no division

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(),1);
        vector<int> right(nums.size(),1);
        vector<int> ans;
        int n = nums.size();
        int product1 = 1;
        int product2 = 1;
        for(int i=0;i<n;i++)
    {
        left[i]=product1;
        product1 *= nums[i];
    }

        for( int i=n-1;i>=0;i--)
        {
            right[i]=product2;
            product2= product2* nums[i];
        }
        for(int i=0;i<n;i++)
    {
        ans.push_back(left[i] * right[i]);
    }
    
    return ans;

    }
};







//O(1) solution
/*class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int countZeros = 0;
        int product = 1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                countZeros++;
                continue;
            }
            product *= nums[i];
        }

        if (countZeros >= 2) {
            // If there are two or more zeros, all elements in the result will be 0.
            return ans;
        }

        for (int i = 0; i < n; i++) {
            if (countZeros == 1) {
                if (nums[i] == 0) {
                    ans[i] = product;
                }
            } else {
                if (nums[i] == 0) {
                    ans[i] = product;
                } else {
                    ans[i] = product / nums[i];
                }
            }
        }

        return ans;
    }
};*/

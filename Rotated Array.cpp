//
//  Rotated Array.cpp
//  
//
//  Created by Shubham Makwana on 11/3/23.
//

#include "Rotated Array.hpp"
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        vector <int> temp(nums.size()) ;
       for(int i=0 ;i<k;i++)
       {
           temp[i]= nums[n+i-k];
       }
       for( int i =0 ;i<n-k;i++)
       {
           temp[i+k]=nums[i];
       }
       nums=temp;
    }
};

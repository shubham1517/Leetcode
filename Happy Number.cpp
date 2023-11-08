//
//  Happy Number.cpp
//  
//
//  Created by Shubham Makwana on 11/6/23.
//

#include "Happy Number.hpp"
class Solution {
public:

// Here what we try to see is that if the number sum what we got is present in  hashset or not as if it is there then number can not be the happy number
    bool isHappy(int n) {
        if( n==1)
        {
            return true;
        }
        set<int> nums;
        while(true)
        {
            int sum =0;
            while(n!=0)//trying to reduce the answer to zero and find out answer
            {
                sum = sum + pow(n%10,2);
                n=n/10;
            }
            if( sum ==1)
            {
                return true;
            }
            n=sum;
            if(nums.find(n)!=nums.end())
            {
                return false;
            }
            nums.insert(sum);
        }
        return false;
        
    }
};

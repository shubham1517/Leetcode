//
//  Reverse Bits.cpp
//  
//
//  Created by Shubham Makwana on 11/6/23.
//

#include "Reverse Bits.hpp"
class Solution {
public:

    bool checkithbitisset(int k , uint32_t &n)
    {
        if(((1<<(k)) & n) !=0)
        {
            return true;
        }
        return false;
    }
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for( int i=0;i<32;i++)
        {
            if(checkithbitisset(i,n))
            {
                ans= ans | (1<<(32-i-1));
            }
        }
        return ans;
    }
};

//
//  Number of 1 bits.cpp
//  
//
//  Created by Shubham Makwana on 11/6/23.
//

#include "Number of 1 bits.hpp"
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n>0)
        {
            if((n & 1)==1)
            {
                count++;
            }
            n=n>>1;
            
        }
        return count;
    }
    
};

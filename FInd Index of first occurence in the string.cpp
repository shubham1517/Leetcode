//
//  FInd Index of first occurence in the string.cpp
//  
//
//  Created by Shubham Makwana on 11/4/23.
//

#include "FInd Index of first occurence in the string.hpp"
class Solution {
public:
    int strStr(string haystack, string needle) {
        int hayleft = 0;
        int needleft =0;
        int needright=0;
        int hayright=0;
        int n = haystack.size();
        if( (needle.size()>haystack.size())  ||needle.size()==0 )
        {
            return -1;
        }
        while(hayright<n)
        {
            if(haystack[hayleft] == needle[needleft])
            {
                hayright = hayleft;
                needright = needleft;
                while(haystack[hayright]==needle[needright])
                {
                    if( needright== needle.size()-1)
                    {
                        if(haystack[hayright]==needle[needright])
                        {
                            return hayleft;
                        }
                    }
                    needright++;
                    hayright++;
                }
                hayleft++;
                needleft=0;
                needright=0;
            }
            else{
                hayleft++;
                hayright++;
            }
        }
        return -1;
    }
};

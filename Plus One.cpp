//
//  Plus One.cpp
//  
//
//  Created by Shubham Makwana on 11/5/23.
//

#include "Plus One.hpp"
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long int num=0;
        for(int i=0;i<digits.size();i++)
        {
            num = num * 10 + digits[i];
        }
        num = num +1;
        long long temp = num;
        int numofdigits=0;
        while( temp>0)
        {
            numofdigits++;
            temp = temp/10;
        }
        vector<int> ans(numofdigits,0);
        int i=numofdigits-1;
        while( num > 0)
        {
            ans[i]=num%10;
            num =num/10;
            i--;
        }
        return ans;
        
    }
};

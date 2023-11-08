//
//  length of last word.cpp
//  
//
//  Created by Shubham Makwana on 11/4/23.
//

#include "length of last word.hpp"
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count =0;
        int i=n-1;
        while(s[i] == ' ')
        {
            i--;
        }

        while(i>=0 && s[i]!=' ')
        {
            count++;
            i--;
        }
        return count;
        
        
    }
};

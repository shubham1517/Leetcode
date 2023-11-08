//
//  is subsequence using stack.cpp
//  
//
//  Created by Shubham Makwana on 11/5/23.
//

#include "is subsequence using stack.hpp"
class Solution {
public:
    bool isSubsequence(string s, string t) {
       for( int i = t.size()-1;i>=0 && s.empty()==0;i--)
       {
           if(s[s.size()-1]==t[i])
           {
               s.pop_back();
           }
       }

       if(s.empty()==1)
       {
           return true;
       }
       return false;
        
    }
};

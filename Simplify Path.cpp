//
//  Simplify Path.cpp
//  
//
//  Created by Shubham Makwana on 11/7/23.
//

#include "Simplify Path.hpp"
class Solution {
public:
    string simplifyPath(string s) {
        stack<string> st;
        string ans="";
        for( int i=0;i<s.size();i++)
        {
            if(s[i]=='/')
            {
                continue;
            }
             string temp;
             while(i<s.size()&& s[i]!='/')
             {
                 temp = temp+ s[i];
                 i++;
             }
             if( temp == ".")
             {
                 continue;
             }
             else if( temp == "..")
             {
                 if(!st.empty())
                 {
                     st.pop();
                 }
             }
             else{
                 st.push(temp);
             }
        }
             while( !st.empty())
             {
                 ans = "/" + st.top() + ans;
                 st.pop();
             }

             if(ans.size()==0)
             {
                 return "/";
             }

        
        
        return ans;
    }
};

//
//  Evaluate Reverse Polish Notatation.cpp
//  
//
//  Created by Shubham Makwana on 11/7/23.
//

#include "Evaluate Reverse Polish Notatation.hpp"
class Solution {
public:
    int calculate( int temp2,int temp1,char sign)
    {
        int ans= 0;
        if(sign == '/')
        {
            ans = temp2/temp1;

        }else if(sign =='*')
        {
            ans = temp2*temp1;

        }else if(sign =='+')
        {
            ans=temp2+temp1;

        }else if(sign == '-')
        {
            ans = temp2 - temp1;
        }
        return ans;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for( int i=0;i<tokens.size();i++)
        {
            int num;
           if(st.empty())
            {
                st.push(stoi(tokens[i]));
            }
            else
            {
                string temp = tokens[i];
                if(temp=="/")
                {
                    int temp1 = st.top();
                    st.pop();
                    int temp2 = st.top();
                    st.pop();
                    char sign = '/';
                    int val= calculate(temp2,temp1,sign);
                    st.push(val);
                }
                else if(temp=="*")
                {
                    int temp1 = st.top();
                    st.pop();
                    int temp2 = st.top();
                    st.pop();
                    char sign = '*';
                    int val= calculate(temp2,temp1,sign);
                    st.push(val);
                }
                else if ( temp == "+")
                {
                    int temp1 = st.top();
                    st.pop();
                    int temp2 = st.top();
                    st.pop();
                    char sign = '+';
                    int val = calculate(temp2,temp1,sign);
                    st.push(val);
                    
                }
                else if(temp=="-")
                {
                    int temp1 = st.top();
                    st.pop();
                    int temp2 = st.top();
                    st.pop();
                    char sign = '-';
                    int val= calculate(temp2,temp1,sign);
                    st.push(val);
                }
                else{
                    st.push(stoi(tokens[i]));

                }

            }
        }
        return st.top();
        
    }
};

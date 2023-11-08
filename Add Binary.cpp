//
//  Add Binary.cpp
//  
//
//  Created by Shubham Makwana on 11/6/23.
//

#include "Add Binary.hpp"
class Solution {
public:
    string addBinary(string a, string b) {
        string tempa = a;
        reverse(tempa.begin(),tempa.end()); //reversing a
        string tempb =b;
        reverse(tempb.begin(),tempb.end()); // reversing b
        int i=0;
        int carry= 0;
        int sum= 0;
        string ans;
        for( int i=0;i<max(tempa.size(),tempb.size());i++) // iterating till the largest string
        {
            int x=0;
            int y=0;
            if(i>=tempb.size())
            {
                y=0;
            }
            else{
                y=tempb[i]-'0';// changing the string to integer
            }
            if(i>=tempa.size())
            {
                x=0;
            }
            else{
                x=tempa[i]-'0';
            }
            sum = x+y+carry;
            ans = ans+to_string(sum%2); // sum is added and then finding out the value
            carry= sum/2;// carry is checked and then we are adding the carry for the next iteration
        }
        if(carry ==1) // checking if at last carry is 1 or not
        {
            ans = ans + to_string(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};

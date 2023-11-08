//
//  reverse words in the string.cpp
//  
//
//  Created by Shubham Makwana on 11/2/23.
//

#include "reverse words in the string.hpp"
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string finalstring;
        string temp;

        // Find the start and end positions for reversing
        int start = 0;
        int end = n - 1;
        
        // Skip leading spaces
        while (start < n && s[start] == ' ') {
            start++;
        }
        
        // Skip trailing spaces
        while (end >= 0 && s[end] == ' ') {
            end--;
        }

        for (int i = end; i >= start; i--) {
            if (s[i] == ' ') {
                if (!temp.empty()) {
                    finalstring += temp + ' ';  // Append the reversed word and a space
                }
                temp = "";  // Clear the temporary word
            } else {
                temp = s[i] + temp;  // Build the temporary word in reverse
            }
        }

        if (!temp.empty()) {
            finalstring += temp;  // Append the last word
        }

        return finalstring;
    }
};



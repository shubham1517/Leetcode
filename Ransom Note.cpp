//
//  Ransom Note.cpp
//  
//
//  Created by Shubham Makwana on 11/4/23.
//

#include "Ransom Note.hpp"
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpr;
        unordered_map<char,int> mpm;
        for( int i=0;i<ransomNote.size();i++)
        {
            mpr[ransomNote[i]]++;
        }
        for( int i=0;i<magazine.size();i++)
        {
            mpm[magazine[i]]++;
        }

        for( auto &i:mpr)
        {

            unordered_map<char,int> :: iterator itr = mpm.find(i.first);
            if(itr==mpm.end())
            {
                return false;
            }
            else
            {
                if(i.second>itr->second)
                {
                    return false;
                }

            }
        }
        return true;
    }
};

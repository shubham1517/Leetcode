//
//  Group Anagrams.cpp
//  
//
//  Created by Shubham Makwana on 11/6/23.
//

#include "Group Anagrams.hpp"
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        if( strs.size()==0)
        {
            return ans;
        }
        for( int i=0;i<strs.size();i++)
        {
            string temp= strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);
        }

        for(auto & i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;

        
    }
};

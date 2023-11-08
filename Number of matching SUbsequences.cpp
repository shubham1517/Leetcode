//
//  Number of matching SUbsequences.cpp
//  
//
//  Created by Shubham Makwana on 11/1/23.
//

#include "Number of matching SUbsequences.hpp"
class Solution {
public:
    bool checkinwords(unordered_map<char, int> &mp, unordered_map<char, int> &temp, const string& word) {
        temp.clear();  // Clear temp for the new word
        for (int j = 0; j < word.size(); j++) {
            temp[word[j]]++;
        }
        for (int j = 0; j < word.size(); j++) {
            auto it = mp.find(word[j]);
            auto it2 = temp.find(word[j]);
            if (it == mp.end() || it2->second > it->second) {
                return false;
            }
        }
        return true;
    }

    int numMatchingSubseq(string s, vector<string> &words) {
        unordered_map<char, int> mp;
        unordered_map<char, int> temp;
        int count = 0;  // Count of matching subsequences
        
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        
        for (const string& word : words) {
            if (checkinwords(mp, temp, word)) {
                count++;
            }
        }
        
        return count;
    }
};

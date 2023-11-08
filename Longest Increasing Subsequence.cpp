//
//  Longest Increasing Subsequence.cpp
//  
//
//  Created by Shubham Makwana on 11/1/23.
//

#include "Longest Increasing Subsequence.hpp"

/*class Solution {
public:
    int lengthOfLIS(svector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }

        vector<int> check(n, 1);

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    check[i] = max(check[i], check[j] + 1);
                }
            }
        }

        int maxi = 0;
        for (int i = 0; i < n; ++i) {
            maxi = max(maxi, check[i]);
        }

        return maxi;
    }
};
*/



class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n = v.size();
        vector<int> temp;
        temp.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i] > temp.back()){
                temp.push_back(v[i]);
            }
            else{
                vector<int> ::iterator ind = lower_bound(temp.begin(),temp.end(),v[i]);
                *ind = v[i];
            }
        }
        return temp.size();
    }
};

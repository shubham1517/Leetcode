//
//  Maximum Value at a given index in a bounded array.cpp
//  
//
//  Created by Shubham Makwana on 11/3/23.
//

#include "Maximum Value at a given index in a bounded array.hpp"
#define ll long long int

class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
       //eg of n will be n= 6 ,index =2 , maxSum =10
        int emptyR = n - index - 1;
        int emptyL = index;
        //emptyR eg will be 3
        //empty left = 2
        
        // Now it's time to declare the binary search operations
        int h = maxSum;
        int l = 1;
        ll res = 0;

        while (l <= h) {
            int mid = ((h+l)/2); // You can use any binary sort mechanism
            ll leftsum = 0;
            ll rightsum = 0;
            ll element = mid-1; //here element is mid -1 because you will have surroundings as -1 so its better to keep them -1 than its original value as the index element will be the greatest
            //Here we are trying to find the sum of the elements on the right which will be n(n+1)/2
            //Here we have to check if the number present in the index can actually go to the end or will be 1 in between . Suppose we have index as 10 and we only have 4 array spaces then we need to subtract the sum as well which is remaining . So do 10*11/2 - (10-4)*(10-4+1)/2 which will give you the total sum on the right hand side
            if (emptyR <= element) {
                rightsum = ((ll)(element) * (element + 1) / 2) - ((ll)(element - emptyR) * (element - emptyR + 1) / 2);
            } else {
                //for eg if the emptyR is 3 and we have around 10 spaces on the right of the index then it would 3*4/2 + remaining array filled with other elements
                rightsum = ((ll)(element) * (element + 1) / 2) + emptyR - element;
            }
//Same we have to check on the left side as well
            if (emptyL <= element) {
                leftsum = ((ll)(element) * (element + 1) / 2) - ((ll)(element - emptyL) * (element - emptyL + 1) / 2);
            } else {
                leftsum = ((ll)(element) * (element + 1) / 2) + emptyL - element;
            }

            ll sum = leftsum + rightsum + mid;
            //If sum is less than max sum then it is a good chance that we will have the mid +1 onto our result and will be able to do it
            if (sum <= maxSum) {
                l = mid + 1;
                res = mid;//store the result in the mid so that if the next one is not extending then as well you have atleast stored value
            } else {
                //else sum is increasing so that value can not be on the index so we will move that index entirely to mid-1
                h = mid - 1;
            }
        }

        return res;
    }
};

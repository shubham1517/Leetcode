//
//  Mindepth.cpp
//  
//
//  Created by Shubham Makwana on 10/31/23.
//

#include "Mindepth.hpp"
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    pair<int,int> mindepthfast(TreeNode * root)
    {
        if(root==NULL)
        {
            pair<int,int> p = make_pair(0,0);
            return p;
        }

        pair<int,int> leftdata = mindepthfast(root->left);
        pair<int,int> rightdata = mindepthfast(root->right);

        pair<int,int> ans;
        int op1;
        if(leftdata.first==0)
        {
            op1=rightdata.first;
        }
        else if(rightdata.first==0)
        {
            op1=leftdata.first;
        }
        else{
            op1= min(leftdata.first,rightdata.first);
        }
        int op2 = max(leftdata.second,rightdata.second);


        ans.first= op1+1;
        ans.second=op2+1;
        return ans;
    }

    int minDepth(TreeNode* root) {
        return mindepthfast(root).first;
        
    }
};

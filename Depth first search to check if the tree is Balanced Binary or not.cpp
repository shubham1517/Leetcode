//
//  Depth first search to check if the tree is Balanced Binary or not.cpp
//  
//
//  Created by Shubham Makwana on 10/30/23.
//

#include "Depth first search to check if the tree is Balanced Binary or not.hpp"
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
    pair<bool,int> isbalancedfast(TreeNode * &root)
    {
        if(root==NULL)
        {
            pair<bool,bool> p = make_pair(true,0);
            return p;
        }
        pair<bool,int>left = isbalancedfast(root->left);
        pair<bool,int>right = isbalancedfast(root->right);

        bool op1= (left.first && right.first);
        int diff = abs(left.second-right.second);
        int height = max(left.second,right.second);
        pair<bool,int> ans;
        if( diff<=1)
        {
            ans.first= (true && op1);
        }
        else{
            ans.first=false;
        }
        ans.second= height+1;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        return isbalancedfast(root).first;
    }
};

//
//  Sum Root to Leaf Nodes.cpp
//  
//
//  Created by Shubham Makwana on 10/31/23.
//

#include "Sum Root to Leaf Nodes.hpp"
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

    int findsum(TreeNode* & root,int currentsum)
    {
        if(root==NULL)
        {
            return 0;
        }
        currentsum= currentsum*10 + root->val;

        if( root->right == NULL && root->left == NULL)
        {
            return currentsum;
        }
        int leftsum= findsum(root->left,currentsum);
        int rightsum = findsum(root->right,currentsum);
        return leftsum+rightsum;

    }
    int sumNumbers(TreeNode* root) {
        int num = findsum(root,0);
        return num;
    }
};

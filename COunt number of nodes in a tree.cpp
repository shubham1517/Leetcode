//
//  COunt number of nodes in a tree.cpp
//  
//
//  Created by Shubham Makwana on 10/30/23.
//

#include "COunt number of nodes in a tree.hpp"
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
    int countNodes(TreeNode* root) {
        queue<TreeNode*> q;
        int count =0 ;
        if(root== NULL)
        {
            return count;
        }
        q.push(root);
        count++;
        while(!q.empty())
        {
            TreeNode * temp = q.front();
            q.pop();
            if(temp->left!=NULL)
            {
                q.push(temp->left);
                count++;
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
                count++;
            }

        }
        return count;
    }
};

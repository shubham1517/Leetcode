//
//  Binary Tree Level Order Traversal;.cpp
//  
//
//  Created by Shubham Makwana on 10/31/23.
//

#include "Binary Tree Level Order Traversal;.hpp"
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
    void levelordertarversal(TreeNode * root, vector<vector<int>> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size= q.size();
            vector<int> levelnodes(size);
            for(int i=0;i<size;i++)
            {
            TreeNode * temp= q.front();
            q.pop();
            levelnodes[i]=temp->val;

            if(temp->left)
            {
               q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
            }
            ans.push_back(levelnodes);
        
        }
        return;

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        levelordertarversal(root, ans);
        return ans;
    }
};

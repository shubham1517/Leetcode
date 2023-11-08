//
//  Binary Tree Zig Zag level Order Traversal.cpp
//  
//
//  Created by Shubham Makwana on 10/31/23.
//

#include "Binary Tree Zig Zag level Order Traversal.hpp"
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
        {
            vector<vector<int>> p;
            return p;
        }
        bool lefttoright = true;
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> finalresult;
        while(!q.empty())
        {
            int size=q.size();
            vector<int> levelnodes(size,0);
            for(int i=0;i<size;i++)
            {
                TreeNode * temp = q.front();
                q.pop();
                int index = lefttoright ? i : size-i-1;
                levelnodes[index]= temp->val;
                
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            lefttoright = !lefttoright;
            finalresult.push_back(levelnodes);
        }
        return finalresult;
        
    }
};

//
//  Maximum Depth of a Binary Tree.cpp
//  
//
//  Created by Shubham Makwana on 10/30/23.
//

#include "Maximum Depth of a Binary Tree.hpp"
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
    int inordertraversal(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int leftpart = inordertraversal(root->left);
        int rightpath = inordertraversal(root->right);
        return 1+ max(leftpart,rightpath);
    }

    int maxDepth(TreeNode* root) {
        int finalans= inordertraversal(root);
        return finalans;
      /* queue<TreeNode*> q;
       int count=0;
       q.push(root);
       while(!q.empty())
       {
           TreeNode * temp = q.front();
           q.pop();
           if(temp==NULL)
           {
               if(!q.empty())
               {
                   count++;
               }
           }
           else{
               if(temp->left!=NULL)
               {
                   q.push(temp->left);
               }
               if(temp->right!=NULL)
               {
                   q.push(temp->right);
               }
           }
       }
       return count;
*/
    }
};

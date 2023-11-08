//
//  Boundary Traversal of a binary tree.cpp
//  
//
//  Created by Shubham Makwana on 10/31/23.
//

#include "Boundary Traversal of a binary tree.hpp"
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
    void traverseleft(TreeNode * &root,vector<int> &temp)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->right==NULL && root->left==NULL)
        {
            return;
        }
        temp.push_back(root->val);
        if(root -> left)
        {
            traverseleft(root->left,temp);
        }
        else{
            traverseleft(root->right,temp);
        }
    }
    //Now lets create the leaf node part ;
    void traverseleafnode(TreeNode* root,vector<int> & temp)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->left==NULL && root->right==NULL)
        {
            temp.push_back(root->val);
            return;
        }
        traverseleafnode(root->left,temp);
        traverseleafnode(root->right,temp);
    }
    void traverseright(TreeNode* root, vector<int> &temp)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            return;
        }
        if(root->right)
        {
            traverseright(root->right,temp);
        }
        else{
            traverseright(root->left,temp);
        }
        //here we will reach at the last second nodes everytime so we will save the answer here.
        temp.push_back(root->val);
        return ;
    }

    vector<int> boundaryOfBinaryTree(TreeNode* root) {
        vector<int> temp;
       if(root==NULL)
       {
           return temp;
       }
       temp.push_back(root->val);
       traverseleft(root->left,temp);
       traverseleafnode(root->left,temp);
       traverseleafnode(root->right,temp);
       traverseright(root->right , temp);
       return temp;

    }
};


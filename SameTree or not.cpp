//
//  SameTree or not.cpp
//  
//
//  Created by Shubham Makwana on 10/30/23.
//

#include "SameTree or not.hpp"
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }
        if (p != NULL && q != NULL) {
            if (p->val == q->val) {
                bool left = isSameTree(p->left, q->left);
                bool right = isSameTree(p->right, q->right);
                return left && right;
            }
        }
        return false;
    }
};

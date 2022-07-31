/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    TreeNode* t= nullptr;
    TreeNode* inorder(TreeNode* ori,TreeNode* cl,TreeNode* target){
        if(ori== nullptr)
            return t;
        inorder(ori->left,cl->left,target);
        if(ori==target)
            t=cl;
        inorder(ori->right,cl->right,target);
        return t;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        return inorder(original,cloned,target);
    }
};

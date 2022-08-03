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
   vector<int>res;
    vector<int>get(TreeNode* root){
        if(root== nullptr)
            return res ;

            get(root->left);
            res.push_back(root->val);
            get(root->right);

        return res;
    }
    int kthSmallest(TreeNode* root, int k) {
        return get(root).at(k-1);
    }
};
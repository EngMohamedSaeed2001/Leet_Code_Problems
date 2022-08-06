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
   vector<int>vec,n;

    void tra(TreeNode* root,int l){
        if(root== nullptr) {
            return;
        }

        if (l>n.size()){
            n.push_back(root->val);
        }
        tra(root->right,l+1);

        tra(root->left,l+1);


    }

    vector<int> rightSideView(TreeNode* root) {
        tra(root,1);
        return n;
    }
};
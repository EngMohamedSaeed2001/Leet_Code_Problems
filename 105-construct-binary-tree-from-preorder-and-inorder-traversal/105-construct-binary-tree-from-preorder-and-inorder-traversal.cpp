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
  TreeNode* help(int prestart,int instart,int inend,vector<int> preorder, vector<int> inorder){

        if(instart>inend)
            return nullptr;

        TreeNode* root=new TreeNode(preorder.at(prestart));
        if(instart==inend)
            return root;



        int mid=0;
        for (int i = instart; i <= inend; ++i) {
            if(root->val==inorder.at(i)) {
                mid = i;
                break;
            }
        }
        root->left= help(prestart+1,instart,mid-1,preorder,inorder);
        root->right= help(prestart+mid-instart+1,mid+1,inend,preorder,inorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int end=inorder.size();
        return help(0,0,end-1,preorder,inorder);
    }
};